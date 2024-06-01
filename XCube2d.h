//
//  XCube2d.h
//  GameEngineBase
//
// all code resources are taken from https://github.com/AlmasB/xcube2d/tree/master
//


#include <stdio.h>
#include <string>
#include <vector>
#include <memory>

#include "GraphicsEngine.h"
#include "EventEngine.h"
#include "MyAudioSubsystem.h"

const int _ENGINE_VERSION_MAJOR = 0;
const int _ENGINE_VERSION_MINOR = 1;

class XCube2Engine {
private:
    static std::shared_ptr<XCube2Engine> instance;
    std::shared_ptr<GraphicsEngine> gfxInstance;
    std::shared_ptr<EventEngine> eventInstance;

    //   std::shared_ptr<MyEngineSystem> myEngineSystemInstance;
    std::shared_ptr<MyAudioSubsystem> audioInstance;

    XCube2Engine();
public:
    /**
    * @return the instance of game engine
    * @exception throws EngineException if init of any submodules failed
    */
    static std::shared_ptr<XCube2Engine> getInstance();
    ~XCube2Engine();

    std::shared_ptr<GraphicsEngine> getGraphicsEngine() { return gfxInstance; }
    std::shared_ptr<EventEngine> getEventEngine() { return eventInstance; }
    std::shared_ptr< MyAudioSubsystem> getMyAudioSubsystem() { return audioInstance;}

    /**
    * Quits the engine, closes all the subsystems
    *
    * All subsequent calls to any of subsystems will have undefined behaviour
    */
    static void quit();


};

typedef XCube2Engine XEngine;

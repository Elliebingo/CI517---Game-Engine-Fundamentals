#include <stdio.h>
#include <SDL_mixer.h>

class MyAudioSubsystem
{
	friend class XCube2Engine;
private:
	MyAudioSubsystem();
public:
	~MyAudioSubsystem();
	void otherfunction();
};
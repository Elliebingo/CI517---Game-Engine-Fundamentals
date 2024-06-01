#include <stdio.h>
#include "AbstractGame.h"
struct GameKey {
	Point2 pos;
	bool isAlive;
};
class MyGame : public AbstractGame
{
private:
	SDL_Rect box;
	Vector2i velocity;
	std::vector<std::shared_ptr<GameKey>> gameKeys;
	/* GAMEPLAY */
	int numKeys;
	void handleKeyEvents();
	void update();
	void render();
	void renderUI();
public:
	MyGame();
	~MyGame();
};
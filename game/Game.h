#pragma once
#include"libs.h"

class Game
{
private:
	//Delta time
	Clock dtClock;
	float dt;
	float lastTime;
	float currTime;

	//Window
	const unsigned WINDOW_WIDTH;
	const unsigned WINDOW_HEIGHT;
	ContextSettings window_context_settings;
	RenderWindow* window;

	//Initializers
	void initVariables();
	void initWindow();
	void initialize();

	//Cleanup
	void cleanup();

public:
	//Constructors / Destructors
	Game();
	~Game();

	//Accessors

	//Modifiers

	//Functions
	bool windowIsOpen();

	void updateDT();

	void update();
	void render();

};


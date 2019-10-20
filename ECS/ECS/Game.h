#pragma once
#include "SDL.h"
#include <stdio.h>
#include <iostream>
#include "Entity.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include  "Position.h"
#include "healthSystem.h"
class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;

	Entity player;
	Entity Alien;
	Entity Dog;
	Entity Cat;

	HealthComponent hc; PositionComponent pc;
	HealthSystem hs; Position ps;
};
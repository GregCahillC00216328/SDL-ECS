#include "Game.h"

Game::Game()
{
	player.addComponent(hc); player.addComponent(pc);
	Alien.addComponent(hc); player.addComponent(pc);
	Dog.addComponent(hc); Dog.addComponent(pc);
	Cat.addComponent(hc); Cat.addComponent(pc);


	hs.addEntity(player); ps.addEntity(player);

}
Game::~Game()
{

}
void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "subSystems are good to go " << std::endl;
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window)
		{
			std::cout << "Window succeded in the making."<<std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			std::cout << "Renderer created" << std::endl;
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		}
		isRunning = true;
	}
	else
	{
		isRunning = false;
	}

}
void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
}
void Game::update()
{

}
void Game::render()
{
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	//SDL_QUIT;
	std::cout << "Cleasing completed";
}

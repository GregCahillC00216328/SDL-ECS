
#include "Game.h"

Game *game = nullptr;

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		//do stuff
	}
	game = new Game();
	while (game->running())
	{
		game->handleEvents();
		game->update();
		game->render();
	}
	
	game->clean();

	return 0;

}

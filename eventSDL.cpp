#include "eventSDL.h"

void sdl::event_sdl::event_listen()
{
	Uint8 *keystate = SDL_GetKeyState(NULL);
	while (continuer)
	{
		SDL_Delay(200);
	//	SDL_WaitEvent(&event);
		SDL_PollEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
				continuer = 0;
			case SDL_KEYDOWN:
				if (keystate[SDLK_UP])
					cout << "TOUCHE HAUT PRESSED" << endl;
		}
	}
}

sdl::event_sdl::event_sdl()
{
	continuer = 1;
}

#include "eventSDL.h"

int sdl::event_sdl::event_listen()
{
		Uint8 *keystate = SDL_GetKeyState(NULL);		
	//	SDL_WaitEvent(&event);
		SDL_Delay(10);
		SDL_PollEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
				return 2;
			case SDL_KEYDOWN:
				if (keystate[SDLK_UP])
					cout << "TOUCHE HAUT PRESSED" << endl;
		}
	return 0;
}


int sdl::event_sdl::event_click()
{
	SDL_WaitEvent(&event);
	switch(event.type)
	{
		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
				case SDL_BUTTON_LEFT:
					return 1;
			}
	}
	return 0;
	
}


sdl::event_sdl::event_sdl()
{

}

void sdl::event_sdl::On_Start(game::gamecore&	gamespace,sdl::create_text& text,sdl::createwin& ecran)
{

	sdl::color	red(255,0,0);
	sdl::color	white(255,255,255);

	SDL_GetMouseState(&mouseX,&mouseY);
	if ((mouseX >= 400 && mouseX <= 520) && (mouseY >= 350 && mouseY <= 380))
	{
		text.texte_SetColor(red.getcolor(),ecran.getsurface());	
			if (event_click() == 1)
			{
				gamespace.set_Status(2);
				ecran.refresh();
			}
	}
	else
	{
		text.texte_SetColor(white.getcolor(),ecran.getsurface());

	}
}

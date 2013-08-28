#include "gamecore.h"

game::gamecore::gamecore(sdl::create_text&	text,SDL_Surface*	ecran)
{
	mouseX = 0;
	mouseY = 0;

	start = &text;	

	start->texte_SetPos(150,200,ecran);
}

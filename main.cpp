#include "sdl_init.h"
#include "create_surface.h"
#include "create_text.h"
#include "rect_img.h"
#include "rect_color.h"
#include "color.h"
#include "eventSDL.h"
#include "gamecore.h"

int	main(int ,char*[])
{
	sdl::createwin	sdlsimple(600,700,"win Simple");
	sdl::event_sdl	event;

	sdl::color	white(255,255,255);

	sdl::create_text	texte("START","HungerGames.ttf",white.getcolor(),400,400,sdlsimple.getsurface());
	game::gamecore	game(texte,sdlsimple.getsurface());
	event.event_listen();
	
	return 0;
}

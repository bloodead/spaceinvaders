#include "sdl_init.h"
#include "create_surface.h"
#include "create_text.h"
#include "rect_img.h"
#include "rect_color.h"
#include "color.h"
#include "eventSDL.h"

int	main(int ,char*[])
{
	sdl::createwin	sdlsimple(600,700,"win Simple");
	sdl::event_sdl	event;

	sdl::color	rouge(255,0,0);
	sdl::color	vert(0,255,0);
	sdl::color	bleu(0,0,255);

	sdl::rect_color	rectred(sdlsimple,rouge.getcolor(),0,0,100,100);
	sdl::rect_color	rectgreen(sdlsimple,vert.getcolor(),100,0,100,100);
	sdl::rect_color	rectblue(sdlsimple,bleu.getcolor(),200,0,100,100);

	sdl::rect_img	imagetest("./test.jpg",sdlsimple.getsurface(),0,100);
	sdl::create_text	texte("BLOODEAD","HungerGames.ttf",rouge.getcolor(),400,400,sdlsimple.getsurface());
	texte.texte_SetColor(vert.getcolor(),sdlsimple.getsurface());
	event.event_listen();
	
	return 0;
}

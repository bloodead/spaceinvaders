#include "create_surface.h"



sdl::create_surface::create_surface(int w, int h)
{
	surface = SDL_SetVideoMode(w, h, 32, SDL_HWSURFACE);
}

sdl::create_surface::~create_surface()
{
	SDL_FreeSurface(surface);
}

#include "sdl_init.h"

sdl::createwin::createwin(int w, int h,string title)
{
	char * buffer = new char[title.length()+1];
	strcpy(buffer,title.c_str());
	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();
	ecran = SDL_SetVideoMode(w, h, 32, SDL_HWSURFACE);
	SDL_WM_SetCaption(buffer, NULL);


}

  
sdl::createwin::createwin()
{
	SDL_Init(SDL_INIT_VIDEO);
	ecran = SDL_SetVideoMode(600, 350, 32, SDL_HWSURFACE);
	SDL_WM_SetCaption("default", NULL);


}

sdl::createwin::~createwin()
{
	SDL_FreeSurface(ecran);
	
}

SDL_Surface*	sdl::createwin::getsurface()
{
	return ecran;
}


void sdl::createwin::refresh()
{
	SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,0,0,0));
	SDL_Flip(ecran);
}


#include "rect_img.h"

sdl::rect_img::rect_img(string pathimg,SDL_Surface*     ecran)
{
	rect.x = 0;
	rect.y = 0;
	path = new char[pathimg.length()+1];
	strcpy(path,pathimg.c_str());
	image = IMG_Load(path);
	SDL_BlitSurface(image,NULL,ecran,&rect);
	
}


sdl::rect_img::~rect_img()
{
	SDL_FreeSurface(image);
	delete	path;
}


sdl::rect_img::rect_img(string pathimg,SDL_Surface*     ecran, int x, int y)
{
	rect.x = x;
	rect.y = y;
	path = new char[pathimg.length()+1];
	strcpy(path,pathimg.c_str());
	image = IMG_Load(path);
	SDL_BlitSurface(image,NULL,ecran,&rect);
	
}


void sdl::rect_img::rect_img_move(int x, int y, SDL_Surface *ecran)
{
	rect.x = x;
	rect.y = y;
	SDL_BlitSurface(image,NULL,ecran,&rect);
}

void sdl::rect_img::refresh()
{
	SDL_Flip(image);
}

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


sdl::rect_img::rect_img(string pathimg,SDL_Surface*     ecran, Sint16 x, Sint16 y, Uint16 w, Uint16 h, Sint16 ximg, Sint16 yimg)
{
	rect.x = x;
	rect.y = y;

    rectimg.x = ximg;
    rectimg.y = yimg;
    rectimg.w = w;
    rectimg.h = h;


	path = new char[pathimg.length()+1];
	strcpy(path,pathimg.c_str());
	image = IMG_Load(path);
    SDL_BlitSurface(image,&rectimg,ecran,&rect);
	
}


void sdl::rect_img::rect_img_move(int x, int y, SDL_Surface *ecran)
{
        rect.x = x;
	rect.y = y;
    std::cout << "va blitter" << std::endl ;
    SDL_BlitSurface(image,&rectimg,ecran,&rect);
    std::cout << "a blitter" << std::endl ;
}

void sdl::rect_img::refresh()
{
	SDL_Flip(image);
}

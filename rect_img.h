#ifndef	_RECT_IMG_H
#define _RECT_IMG_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <iostream>
#include <string>
using namespace std;


namespace sdl
{
	class rect_img
	{
		private:
			SDL_Surface	*image;
			SDL_Rect	rect;
            SDL_Rect    rectimg;
			char		*path;
		public:
			rect_img(string pathimg,SDL_Surface *ecran);
			~rect_img();
            rect_img(string pathimg,SDL_Surface *ecran, Sint16 x, Sint16 y, Uint16 w, Uint16 h, Sint16 ximg, Sint16 yimg);
			void    rect_img_move(int x, int y, SDL_Surface *ecran);
			void    refresh();
	};
}

#endif

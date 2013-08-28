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
			char		*path;
		public:
			rect_img(string pathimg,SDL_Surface *ecran);
			~rect_img();
			rect_img(string pathimg,SDL_Surface *ecran, int x, int y);
			void    rect_img_move(int x, int y, SDL_Surface *ecran);
			void    refresh();
	};
}

#endif

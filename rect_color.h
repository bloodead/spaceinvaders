#ifndef _RECT_COLOR_H_
#define _RECT_COLOR_H_
#include <SDL/SDL.h>
#include <iostream>
#include <string>
#include "sdl_init.h"



namespace sdl
{
	class rect_color
	{
		private:
			SDL_Rect	rect;
			SDL_Color*	colord;
		public:
			rect_color(sdl::createwin& win,SDL_Color color,int x,int y, int w, int h);
			void rect_color_move(SDL_Color color, sdl::createwin&	win,Sint16 x,Sint16 y, Uint16 w, Uint16  h);
	};
}

#endif

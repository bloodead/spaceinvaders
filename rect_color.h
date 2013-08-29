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
			void rect_color_move(sdl::createwin&	win,int x,int y, SDL_Color color, Uint16 w, Uint16  h);
	};
}

#endif

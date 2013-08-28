#ifndef _RECT_COLOR_H_
#define _RECT_COLOR_H_
#include <SDL/SDL.h>
#include <iostream>
#include <string>
#include "sdl_init.h"
using namespace std;


namespace sdl
{
	class rect_color
	{
		private:
			SDL_Rect	rect;
		public:
			rect_color(sdl::createwin& win,SDL_Color color,int x,int y, int w, int h);
	};
}

#endif

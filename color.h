#ifndef	_COLOR_H_
#define _COLOR_H_
#include <SDL/SDL.h>

namespace sdl
{
	class color
	{
		private:
			SDL_Color	colorRGB;
		public:
			color();
			SDL_Color	getcolor();
			color(Uint8 r,Uint8 g,Uint8 b);
	};
}

#endif

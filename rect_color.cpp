#include "rect_color.h"


sdl::rect_color::rect_color(sdl::createwin& win,SDL_Color color, int x, int y, int w, int h)
{
	rect.w = w;
	rect.h = h;
	rect.x = x;
	rect.y = y;

	SDL_FillRect(win.getsurface(),&rect,SDL_MapRGB(win.getsurface()->format,color.r,color.g,color.b));
	SDL_Flip(win.getsurface());
}



#include "rect_color.h"


sdl::rect_color::rect_color(sdl::createwin& win,SDL_Color color, int x, int y, int w, int h)
{
	rect.w = w;
	rect.h = h;
	rect.x = x;
	rect.y = y;

	colord = &color;

	SDL_FillRect(win.getsurface(),&rect,SDL_MapRGB(win.getsurface()->format,color.r,color.g,color.b));
	SDL_Flip(win.getsurface());
}

void sdl::rect_color::rect_color_move(SDL_Color color,sdl::createwin& win,Sint16  x, Sint16 y,Uint16 w,Uint16  h)
{
	using std::cout;
	using std::endl;
//	cout << w << endl;
	
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;

	SDL_FillRect(win.getsurface(),&rect,SDL_MapRGB(win.getsurface()->format,(Uint8)color.r,(Uint8)color.g,(Uint8)color.b));
}



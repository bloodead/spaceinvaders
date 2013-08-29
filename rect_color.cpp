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

void sdl::rect_color::rect_color_move(sdl::createwin& win,int x, int y,SDL_Color color,Uint16 w,Uint16  h)
{
	using std::cout;
	using std::endl;
//	cout << w << endl;
	
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;

	SDL_FillRect(win.getsurface(),&rect,SDL_MapRGB(win.getsurface()->format,color.r,color.g,color.b));
}



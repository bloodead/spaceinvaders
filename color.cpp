#include "color.h"

sdl::color::color()
{
	colorRGB.r=255;
	colorRGB.g=255;
	colorRGB.b=255;
}

sdl::color::color(int r,int g,int b)
{
	colorRGB.r=r;
	colorRGB.g=g;
	colorRGB.b=b;
}


SDL_Color       sdl::color::getcolor()
{
	return colorRGB;
}

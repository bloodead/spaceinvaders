#ifndef _SDL_INIT_H_
#define _SDL_INIT_H_
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <iostream>
#include <string>
using namespace std;


namespace sdl
{
	class createwin
	{
		private:
			SDL_Surface	*ecran;
		public:
			createwin();
			~createwin();
			createwin(int w, int h, string title);
			void	refresh();
			SDL_Surface*	getsurface();
	};

}


#endif

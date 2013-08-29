#ifndef _SDL_INIT_H_
#define _SDL_INIT_H_
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <iostream>
#include <string>



namespace sdl
{
	class createwin
	{
		private:
			SDL_Surface	*ecran;
		public:
			createwin();
			~createwin();
			createwin(int w, int h, std::string title);
			void	refresh();
			SDL_Surface*	getsurface();
			void	refresh_zone(int x, int y, int h, int w);
	};

}


#endif

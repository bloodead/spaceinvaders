#ifndef	_EVENTSDL_H
#define _EVENTSDL_H
#include <SDL/SDL.h>
#include <string>
#include <iostream>
#include "gamecore.h"
#include "color.h"
#include "create_text.h"
#include "sdl_init.h"

using namespace std;

namespace sdl
{
	class event_sdl
	{
		private:
			SDL_Event	event;
			int		mouseX;
			int		mouseY;
		public:
				event_sdl();
			int	event_listen();
			void	On_Start(game::gamecore&	gamespace,sdl::create_text& text, sdl::createwin& ecran);
			int	event_click();
	};
}


#endif

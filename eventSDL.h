#ifndef	_EVENTSDL_H
#define _EVENTSDL_H
#include <SDL/SDL.h>
#include <string>
#include <iostream>

using namespace std;

namespace sdl
{
	class event_sdl
	{
		private:
			SDL_Event	event;
			int		continuer;
		public:
				event_sdl();
			void	event_listen();
	};
}


#endif

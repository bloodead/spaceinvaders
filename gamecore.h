#ifndef _GQMECORE_H_
#define	_GQMECORE_H_
#include <SDL/SDL.h>
#include "create_text.h"
#include "color.h"

namespace game
{
	class	gamecore
	{
		private:
			int	mouseX;
			int	mouseY;
			sdl::create_text*	start;
			SDL_Surface*		ecran;
		public:
			gamecore(sdl::create_text& text,SDL_Surface*	ecran);
		
	};
}


#endif

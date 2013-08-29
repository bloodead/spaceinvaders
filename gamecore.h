#ifndef _GQMECORE_H_
#define	_GQMECORE_H_
#include <SDL/SDL.h>
#include "create_text.h"
#include "color.h"
#include "sdl_init.h"
#include "player.h"

namespace game
{
	class	gamecore
	{
		private:
			int	mouseX;
			int	mouseY;
			int	status;
			sdl::create_text*	score;
			int	frame;
		public:
			gamecore();
			int	get_Status();
			void	set_Status(int code);
			void	show_ui(sdl::createwin& ecran,game::player&	player);
			int	frame_count();
	};
}


#endif

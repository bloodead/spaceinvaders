#ifndef	_ENNEMY_H_
#define _ENNEMY_H_
#include "rect_color.h"
#include "sdl_init.h"
#include "color.h"

namespace	game
{
	class	ennemy
	{
		private:
			int	status;
			int	posX;
			int	posY;
			sdl::rect_color	*rect;
			int	startline;
			int	endline;
			int	sensline;
		public	:
			ennemy(int x,int y,sdl::createwin&	ecran,int	start, int	end);
			void	move(sdl::createwin&      ecran);
	};

}

#endif

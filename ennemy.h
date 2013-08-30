#ifndef	_ENNEMY_H_
#define _ENNEMY_H_
#include "rect_color.h"
#include "sdl_init.h"
#include "color.h"
#include "weapon.h"
#include "gamecore.h"
#include "player.h"

namespace	game
{
	class	ennemy
	{
		private:
			int	status;
			int	posX;
			int	posY;
			sdl::rect_color	*rect;
			game::weapon_ennemy	weapon_e;
			int	startline;
			int	endline;
			int	sensline;
		public	:
			ennemy(int x,int y,sdl::createwin&	ecran,int	start, int	end);
			void	move(sdl::createwin&      ecran);
			void 	detect_weapon(sdl::createwin&      ecran,game::weapon_player& weapon, game::player&	player);
			int	get_status();
			void	fire(sdl::createwin&      ecran);
			void	update_fire(sdl::createwin&      ecran);
			game::weapon_ennemy&	get_weapon();
	};

}

#endif

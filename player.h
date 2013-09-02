#ifndef	_PLAYER_H_
#define _PLAYER_H_
#include <SDL/SDL.h>
#include "rect_color.h"
#include "sdl_init.h"
#include "color.h"
#include "weapon.h"
#include "rect_img.h"

namespace game
{
	class	player
	{
		private:
			int	score;
			int	vie;
			int	posX;
			int 	posY;
			int	life;
			int	speed;
            sdl::rect_color*	rect;
		public:
			player(sdl::createwin& ecran,int x, int y);
		int	get_score();
		int	get_vie();
		void	update_vie();
		void	move(sdl::createwin& ecran, int sens);
		int	get_pos(int pos);
		void	change_score(sdl::createwin& ecran, int s);
		void	detect_attack(sdl::createwin& ecran, game::weapon_ennemy& weapon);
	};
}

#endif

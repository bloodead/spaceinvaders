#ifndef _LINEENNEMY_H_
#define _LINEENNEMT_H_
#include "ennemy.h"
#include "sdl_init.h"
#include <iostream>
#include <cstdlib>
#include "weapon.h"

using namespace std;

namespace game
{
	class line
	{
		private:
			game::ennemy*	lineEnnemy[10];
			int	speedfire;
			int	time;
		public:
			line(sdl::createwin&	ecran);
			~line();
			void	move(sdl::createwin& ecran,game::weapon_player& weapon,game::player& player);
			void    fire_rand(sdl::createwin& ecran);
	};

}

#endif

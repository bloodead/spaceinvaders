#ifndef _PACKENNEMY_H_
#define _PACKENNEMY_H_
#include "lineEnnemy.h"

namespace game
{
	class	pack
	{
		private:
			game::line*	packEnnemy[5];
			int	numEnnemy;
			int	time;
			int	speedfire;

		public:
			pack(sdl::createwin&    ecran);
			~pack();
		void	update(sdl::createwin&    ecran,game::weapon_player& weapon,game::player& player);
		void    fire_rand(sdl::createwin&    ecran);
	};

}

#endif

#ifndef _LINEENNEMY_H_
#define _LINEENNEMT_H_
#include "ennemy.h"
#include "sdl_init.h"
#include <iostream>

using namespace std;

namespace game
{
	class line
	{
		private:
			game::ennemy*	lineEnnemy[10];
		public:
			line(sdl::createwin&	ecran);
			void	move(sdl::createwin&	ecran);
	};

}

#endif

#ifndef _WEAPON_H_
#define _WEAPON_H_
#include "sdl_init.h"
#include <SDL/SDL.h>
#include "rect_color.h"
#include "color.h"

namespace game
{
	class weapon_player
	{
		protected:
			int	posX;
			int	posY;
			int	speed;
			int	status;
			sdl::rect_color*	rect;
		public:
			weapon_player();
		virtual	void refresh_pos(sdl::createwin& ecran);
			int	get_pos(int pos);
		virtual void	fire(sdl::createwin& ecran,int x, int y);
			int	toucher(sdl::createwin& ecran);
	};
	class weapon_ennemy : public  weapon_player
	{	
		public:
			weapon_ennemy();
			void    fire(sdl::createwin& ecran,int x, int y);
			void refresh_pos(sdl::createwin& ecran);
	};
}

#endif

#include "ennemy.h"
#include <iostream>


game::ennemy::ennemy(int	x, int	y, sdl::createwin&	ecran,int	start,	int	end)
{
	sdl::color	vert(0,255,0);
	sdl::rect_color	rectmp(ecran,vert.getcolor(),x,y,20,20);
	rect = &rectmp;
	posX = x;
	posY = y;
	startline = start;
	endline	= end;
	sensline = 0;
	status = 1;

}

game::weapon_ennemy&	game::ennemy::get_weapon()
{
	return weapon_e;
}

void	game::ennemy::fire(sdl::createwin&      ecran)
{
	weapon_e.fire(ecran,posX,posY);
}

void	game::ennemy::update_fire(sdl::createwin&      ecran)
{
	weapon_e.refresh_pos(ecran);
}


void	game::ennemy::move(sdl::createwin&      ecran)
{
	SDL_Color	vert;

	vert.r = 0;
	vert.g = 255;
	vert.b = 0;


	if (sensline == 0)
	{
		posX = posX + 5;
		if (posX >= endline)
			{
				posY = posY + 20;
				ecran.refresh_zone(endline - 5,posY - 20,20,20);
				sensline = 1;
			}
	ecran.refresh_zone(posX - 8,posY,20, 20);
	}
	else
	{
		posX = posX - 5;
		if (posX <= startline)
		{

			posY = posY + 20;
			ecran.refresh_zone(startline + 5,posY - 20,20,20);
			sensline = 0;
		}
	ecran.refresh_zone(posX + 8,posY,20, 20);


	}
	
	rect->rect_color_move(vert,ecran, posX, posY,20,20);
}

void	game::ennemy::detect_weapon(sdl::createwin& ecran,game::weapon_player& weapon, game::player&   player)
{
	if (weapon.get_pos(1) >= posX - 5 && weapon.get_pos(1) <= posX + 20 && weapon.get_pos(2) >= posY && weapon.get_pos(2) <= posY + 20)
		{
			std::cout << "toucher Couler XD" << std::endl;	
			weapon.toucher(ecran);
			ecran.refresh_zone(posX,posY,20, 20);
			player.change_score(ecran,20);
			status = 0;
			
		}
	
}

int	game::ennemy::get_status()
{
	return status;
}

#include "weapon.h"

game::weapon_player::weapon_player()
{
	posX = 0;
	posY = 0;
	speed = 5;
	status = 0;
}

game::weapon_ennemy::weapon_ennemy()
{
	posX = 0;
	posY = 0;
	speed = 5;
	status = 0;
}
void game::weapon_player::refresh_pos(sdl::createwin& ecran)
{
	sdl::color      cyan;

	if(status == 1)
	{
		ecran.refresh_zone(posX,posY,5,5);
		if (posY <= 50)
		{
			status = 0;
			return;
		}
		posY = posY - 20;
		rect->rect_color_move(cyan.getcolor(),ecran, posX, posY,5,5);
		
	}

}

void game::weapon_ennemy::refresh_pos(sdl::createwin& ecran)
{
	sdl::color      cyan;

	if(status == 1)
	{
		ecran.refresh_zone(posX,posY,5,5);
		if (posY >= 680)
		{
			status = 0;
			return;
		}
		posY = posY + 20;
		rect->rect_color_move(cyan.getcolor(),ecran, posX, posY,5,5);
		
	}

}

int	game::weapon_player::get_pos(int pos)
{
	if (pos == 1)
		return posX;
	if (pos == 2)
		return posY;

	return 0;
}

void	game::weapon_player::fire(sdl::createwin& ecran,int x, int y)
{

	if (status == 1)
		return;
		sdl::color	cyan;

		x = x + 7;
		y = y - 4;
		posX = x;
		posY = y;
	
		sdl::rect_color	tmp(ecran,cyan.getcolor(),x,y,5,5);
	
		rect = &tmp;
	
		status = 1;
}

void	game::weapon_ennemy::fire(sdl::createwin& ecran,int x, int y)
{

	if (status == 1)
		return;
		sdl::color	cyan;

		x = x + 7;
		y = y + 24;
		posX = x;
		posY = y;
	
		sdl::rect_color	tmp(ecran,cyan.getcolor(),x,y,5,5);
	
		rect = &tmp;
	
		status = 1;
}


int	game::weapon_player::toucher(sdl::createwin& ecran)
{
		status = 0;
		ecran.refresh_zone(posX,posY,5,5);
		posX = 0;
		posY = 0;
		
	
	return 0;
}

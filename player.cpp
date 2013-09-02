#include "player.h"
#include <iostream>

game::player::player(sdl::createwin& ecran,int x, int y)
{
	sdl::color	blue(0,0,255);
	score = 0;
	posX = x;
	posY = y;
	life = 100;
	speed = 12;
	vie = 4;


    sdl::rect_color	playerent(ecran,blue.getcolor(),x,y,20,20);
    rect = &playerent;
}

int game::player::get_score()
{
	return score;
}

int game::player::get_vie()
{
	return vie;
}

void	game::player::move(sdl::createwin& ecran,int	sens)
{
	sdl::color	blue(0,0,255);
	
//	std::cout << sens << std::endl;

	if(sens == 12)
	{
		posX = posX - speed;
        ecran.refresh_zone(posX + 20,posY,speed,20);
	}
	else if(sens == 13)
	{
		posX = posX + speed;
      ecran.refresh_zone(posX - speed,posY,speed,20);
		
	}
        rect->rect_color_move(blue.getcolor(),ecran,posX,posY,20,20);



}

int	game::player::get_pos(int pos)
{
	if (pos == 1)
		return posX;
	if (pos == 2)
		return posY;

	return 0;
}

void	game::player::change_score(sdl::createwin& ecran, int	s)
{
	score =  score + s;
	ecran.getsurface();

}

void	game::player::update_vie()
{
	vie = vie - 1;
}

void    game::player::detect_attack(sdl::createwin& ecran, game::weapon_ennemy& weapon)
{
	if (weapon.get_pos(1) + 5 >= posX && weapon.get_pos(1) <= posX + 20 && weapon.get_pos(2) + 5  >= posY && weapon.get_pos(2) <= posY + 20) 
	{
		std::cout << "TOUCHED HAHAHAHAHAHAHA" << std::endl;
		weapon.toucher(ecran);
		update_vie();
	}

}

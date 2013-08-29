#include "ennemy.h"


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

}


void	game::ennemy::move(sdl::createwin&      ecran)
{
	sdl::color	vert(0,255,0);


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
	std::cout << endline  << std::endl;
	rect->rect_color_move(ecran, posX, posY,vert.getcolor(),20,20);
}

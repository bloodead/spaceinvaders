#include "lineEnnemy.h"

game::line::line(sdl::createwin& ecran)
{
	int	count;
	int	decal;
	int	enddecal;

	decal = 100;
	count = 0;
	enddecal = 200;

	while (count != 6)
	{
		lineEnnemy[count] = new game::ennemy(decal,100,ecran,decal,700 - enddecal);
		decal = decal + 40;
		enddecal = enddecal - 40;
		count = count + 1;
	
	}
}


void	game::line::move(sdl::createwin& ecran)
{
	int	count;

	count= 0;

	while (count != 6)
	{
		lineEnnemy[count]->move(ecran);
		count = count + 1;
	}	

}

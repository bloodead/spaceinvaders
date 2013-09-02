#include "lineEnnemy.h"

game::line::line(sdl::createwin& ecran, int y)
{
	int	count;
	int	decal;
	int	enddecal;

	decal = 100;
	count = 0;
	enddecal = 200;
	speedfire = 20;
	time = 0;

	while (count != 8)
	{
		lineEnnemy[count] = new game::ennemy(decal,y,ecran,decal,700 - enddecal);
		decal = decal + 40;
		enddecal = enddecal - 40;
		count = count + 1;
	
	}
}


void	game::line::move(sdl::createwin& ecran,game::weapon_player& weapon,game::player& player)
{
	int	count;

	count= 0;	

	while (count != 8)
	{
		if (lineEnnemy[count]->get_status() == 1)
		{
			lineEnnemy[count]->update_fire(ecran);	
			lineEnnemy[count]->move(ecran);
			lineEnnemy[count]->detect_weapon(ecran,weapon,player);
			player.detect_attack(ecran,lineEnnemy[count]->get_weapon());
		}
		
			count = count + 1;
	}	

}


void	game::line::fire_rand(sdl::createwin& ecran)
{

	if(time == speedfire)
	{
		int	num;
		num = rand() % 8;
		std::cout << num << std::endl;
		if (lineEnnemy[num]->get_status() != 0)
		lineEnnemy[num]->fire(ecran);
		time = 0;
	}
	time = time + 1;	
		
}


game::line::~line()
{

	for(int i=0; i<8; i++)
	{
		if (lineEnnemy[i] != NULL)
		{
			delete lineEnnemy[i];
		}
	}

}

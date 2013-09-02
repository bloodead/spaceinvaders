#include "packEnnemy.h"


	game::pack::pack(sdl::createwin&    ecran)
	{
		int	count;
		int	decal;

		count = 0;
		decal = 0;
		time = 0;
		speedfire = 1;

		while(count != 5)
		{
			decal = decal + 40;
			packEnnemy[count] = new game::line(ecran,100 + decal);
			count = count + 1;
		}
			
	}


	game::pack::~pack()
{
	for(int i=0; i<5; i++)
	{
		if(packEnnemy[i] != NULL)
		{
			delete packEnnemy[i];
		}
	}

}


void	game::pack::update(sdl::createwin&    ecran,game::weapon_player& weapon,game::player& player)
{
	fire_rand(ecran);
	for(int	i=0; i<5; i++)
	{
		packEnnemy[i]->move(ecran,weapon,player);
	}

}


void	game::pack::fire_rand(sdl::createwin&    ecran)
{
	if(time == speedfire)
	{
		int	num;
		num = rand() % 5;
		std::cout << num << std::endl;
		packEnnemy[num]->fire_rand(ecran);
		time = 0;
	}
	time = time + 1;
}

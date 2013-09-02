#include "gamecore.h"
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

game::gamecore::gamecore()
{
	mouseX = 0;
	mouseY = 0;
	status = 1;
	frame = 0;

}

int	game::gamecore::get_Status()
{
	return status;
}


void	game::gamecore::set_Status(int code)
{
	status = code;
}

void	game::gamecore::show_ui(sdl::createwin& ecran, game::player& player)
{
	sdl::color	white(255,255,255);
	std::ostringstream oss;
	oss << "Score : " << player.get_score() << "     Vie Restante : " << player.get_vie();
	std::string result = oss.str();
	ecran.refresh_zone(0,0,700,80);
	sdl::create_text	scoreTmp(result,"HungerGames.ttf",white.getcolor(),0,0,ecran.getsurface());
}

int	game::gamecore::frame_count()
{
	if (frame < 5)
		frame = frame + 1;
	if (frame == 5)
	{
		frame = 0;
		return 1;
	}

	return 0;
}

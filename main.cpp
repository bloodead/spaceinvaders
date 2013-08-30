#include "sdl_init.h"
#include "create_surface.h"
#include "create_text.h"
#include "rect_img.h"
#include "rect_color.h"
#include "color.h"
#include "eventSDL.h"
#include "gamecore.h"
#include "player.h"
#include "ennemy.h"
#include "lineEnnemy.h"
#include "weapon.h"

int	main(int ,char*[])
{
	sdl::createwin	sdlsimple(900,700,"win Simple");
	sdl::event_sdl	event;
	game::gamecore	gamespace;
	game::player	player(sdlsimple,200,680);
	game::line 	line1(sdlsimple);
	game::weapon_player	weapon;

	sdl::color	white(255,255,255);

	sdl::create_text	texte("START","HungerGames.ttf",white.getcolor(),400,350,sdlsimple.getsurface());
	

	//BOUCLE GAME
	while(gamespace.get_Status())
	{
		if(event.event_listen() == 2)
			break;
		if (gamespace.get_Status() == 1)
			event.On_Start(gamespace,texte,sdlsimple);

		if (gamespace.get_Status() == 2)
		{
			gamespace.show_ui(sdlsimple,player);
			if(gamespace.frame_count())
			{
				line1.move(sdlsimple,weapon,player);
				std::cout << "SCORE : " << player.get_score() << endl;
				player.move(sdlsimple, event.event_listen());	

				if (event.event_listen() == 10)
					weapon.fire(sdlsimple,player.get_pos(1),player.get_pos(2));
				weapon.refresh_pos(sdlsimple);
				
			}
			
		}


	}
	return 0;
	
}

#ifndef _CREATE_TEXT_H
#define _CREATE_TEXT_H
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <iostream>
#include <string>
using namespace std;

namespace sdl
{
	class create_text
	{
		private:
			SDL_Surface	*image;
			TTF_Font	*font;
			SDL_Rect	rect;
			char	*texte;
			char	*path;
		public:
			create_text(string	text,string	pathfont,SDL_Color	color,int x, int y, SDL_Surface *ecran);
			~create_text();
			void    texte_SetColor(SDL_Color        color, SDL_Surface *ecran);
			void    texte_SetPos(int x, int y, SDL_Surface *ecran);
	};
}


#endif

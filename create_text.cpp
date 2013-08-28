#include "create_text.h"

sdl::create_text::create_text(string	text,string	pathfont,SDL_Color	color,int x, int y,SDL_Surface *ecran)
{
	texte = new char[text.length()+1];
	strcpy(texte,text.c_str());
	path = new char[pathfont.length()+1];
	strcpy(path,pathfont.c_str());
	font = TTF_OpenFont(path,35);
	image = TTF_RenderText_Blended(font,texte,color);
	rect.x = x;
	rect.y = y;
	SDL_BlitSurface(image,NULL,ecran,&rect);
	SDL_Flip(ecran);
}



sdl::create_text::~create_text()
{
	SDL_FreeSurface(image);
	delete	texte;
	delete	path;
	TTF_CloseFont(font);
}


void sdl::create_text::texte_SetColor(SDL_Color color,SDL_Surface *ecran)
{
	image = TTF_RenderText_Blended(font,texte,color);
	SDL_BlitSurface(image,NULL,ecran,&rect);
	SDL_Flip(ecran);
}

void sdl::create_text::texte_SetPos(int x, int y,SDL_Surface *ecran)
{
	rect.x = x;
	rect.y = y;
	SDL_BlitSurface(image,NULL,ecran,&rect);
	SDL_Flip(ecran);
}

#ifndef	_CREATE_SURFACE_
#define	_CREATE_SURFACE_
#include <SDL/SDL.h>

namespace sdl
{
	class create_surface
	{
		private:
			SDL_Surface	*surface;
		public:
			create_surface(int w, int h);
			~create_surface();
	};
}

#endif

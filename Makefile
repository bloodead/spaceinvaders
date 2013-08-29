NAME = sdlc++
SRCS = main.cpp	\
	sdl_init.cpp \
	create_surface.cpp \
	create_text.cpp \
	rect_img.cpp \
	rect_color.cpp \
	color.cpp	\
	eventSDL.cpp	\
	gamecore.cpp	\
	player.cpp	\
	ennemy.cpp	\
	lineEnnemy.cpp
OBJS = ${SRCS:.cpp=.o}
LDFLAGS = -g3 -W -Werror -Wall -Wextra
LIBRARIES =  -lSDL -lSDL_image -lSDL_ttf
CXXFLAGS = -W -Werror -Wall -Wextra 

go : ${OBJS}
	 g++-4.8 $(LDFLAGS) -o $(NAME) $(OBJS) ${LIBRARIES}

clean:
	rm -f *.o

distclean:
		rm -f $(NAME)
		rm -f *.o

rebuild:	clean	distclean go

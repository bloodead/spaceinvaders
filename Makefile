NAME = sdlc++
SRCS = main.cpp	\
	sdl_init.cpp \
	create_surface.cpp \
	create_text.cpp \
	rect_img.cpp \
	rect_color.cpp \
	color.cpp	\
	eventSDL.cpp	\
	gamecore.cpp
OBJS = ${SRCS:.cpp=.o}
LDFLAGS = -lSDL -lSDL_image -lSDL_ttf
CFLAGS = -W -Werror -Wall -Wextra -std=c++11

go : ${OBJS}
	 g++-4.8 $(CFLAGS) -o $(NAME) $(SRCS) ${LDFLAGS}

clean:
	rm -f *.o

distclean:
		rm -f $(NAME)
		rm -f *.o

rebuild:	clean	distclean go

SRC = main.cpp	\
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

OBJ = $(SRC:.cpp=.o)

TARGET = sdl++

CXX = g++-4.8
CXXFLAGS = -W -Wall -Wextra -std=c++11 -ggdb
LDFLAGS = $(CXXFLAGS)
LIBRARIES = -L/usr/lib/x86_64-linux-gnu -lSDL -lSDLmain -lSDL_ttf -lSDL_image
RM = rm -rf
SHELL = /bin/bash

.PHONY: clean fclean re .cpp.o

all: $(TARGET)

$(TARGET): $(OBJ)
	@echo -en 'Linking \E[1m$(TARGET)\E[0m...'
	@if [[ `$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJ) $(LIBRARIES) &> $(TARGET).error ; cat $(TARGET).error | grep -E '\: error\:' | wc -l` -ne 0 ]] ; then { echo -e "\E[31mKO\E[0m See $(TARGET).error" ; exit 2 ; } ; elif [[ `cat $(TARGET).error | grep -E '\: warning\:' | wc -l` -ne 0 ]] ; then { echo -e "\E[33mWarning\E[0m See $(TARGET).error"; exit 1 ; } ; else echo -e "\E[32mOK\E[0m" ; fi

clean:
	@for obj in $(OBJ); do \
		echo -n "Removing $${obj}..." ; \
		$(RM) $${obj} ; \
		echo -e "\E[1mDone\E[0m" ; \
	done
	@for obj in $(SRC:.cpp=.cpp.error); do \
		echo -n "Removing $${obj}..." ; \
		$(RM) $${obj} ; \
		echo -e "\E[1mDone\E[0m" ; \
	done
	@echo -n "Removing $(TARGET).error..." ; \
	$(RM) $(TARGET).error ; \
	echo -e "\E[1mDone\E[0m"
	@echo -n "Removing vim swap files..."
	@$(RM) .*.swp 
	@echo -e "\E[1mDone\E[0m"

fclean: clean
	@echo -n "Removing $(TARGET)..."
	@$(RM) $(TARGET)
	@echo -e "\E[1mDone\E[0m"

re: fclean all

.cpp.o:
	@echo -en "Compiling \E[1m$<\E[0m..."
	@if [[ `$(CXX) $(CXXFLAGS) -c $< -o $@ &> $<.error ; cat $<.error | wc -l` -eq 0 ]]; then echo -e "\E[32mOK\E[0m" ; elif [[ `cat $<.error | grep -E '\: error\:' | wc -l` -ne 0 ]] ; then echo -e "\E[31mKO\E[0m See $<.error file" ; else echo -e "\E[33mWarning\E[0m See $<.error file" ; fi

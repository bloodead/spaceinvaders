TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    weapon.cpp \
    sdl_init.cpp \
    rect_img.cpp \
    rect_color.cpp \
    player.cpp \
    packEnnemy.cpp \
    lineEnnemy.cpp \
    gamecore.cpp \
    eventSDL.cpp \
    ennemy.cpp \
    create_text.cpp \
    create_surface.cpp \
    color.cpp

OTHER_FILES += \
    test.jpg \
    sdl++ \
    mem \
    Makefile \
    HungerGames.ttf

HEADERS += \
    weapon.h \
    sdl_init.h \
    rect_img.h \
    rect_color.h \
    player.h \
    packEnnemy.h \
    lineEnnemy.h \
    gamecore.h \
    eventSDL.h \
    ennemy.h \
    create_text.h \
    create_surface.h \
    color.h


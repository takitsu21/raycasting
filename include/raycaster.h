#ifndef RAYCASTING_RAYCASTER_H
#define RAYCASTING_RAYCASTER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_rect.h>
#include <iostream>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480


class Raycaster
{
private:
    SDL_Window *mSdlWindow;
    SDL_Surface *mSdlSurface;

public:
    void createWindow();

    void drawRectangle();

    void waitEvent();

    void update();

    SDL_Window *getSdlWindow();

    SDL_Surface *getSdlSurface();
};

#endif // RAYCASTING_RAYCASTER_H

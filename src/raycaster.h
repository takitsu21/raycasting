#ifndef RAYCASTING_RAYCASTER_H
#define RAYCASTING_RAYCASTER_H

#include <SDL.h>
#include <SDL_timer.h>
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

class Raycaster
{
private:
    SDL_Window *sdlWindow;
    SDL_Surface *sdlSurface;

public:
    void createWindow();
};

#endif // RAYCASTING_RAYCASTER_H

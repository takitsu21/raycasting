//
// Created by Dylz on 18/12/2022.
//
#include "raycaster.h"

void Raycaster::createWindow()
{
    this->sdlWindow = nullptr;

    this->sdlSurface = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        this->sdlWindow = SDL_CreateWindow("Raycasting", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                           SCREEN_WIDTH,
                                           SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (this->sdlWindow == nullptr)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            this->sdlSurface = SDL_GetWindowSurface(this->sdlWindow);

            SDL_FillRect(this->sdlSurface, nullptr, SDL_MapRGB(this->sdlSurface->format, 0xFF, 0xFF, 0xFF));

            SDL_UpdateWindowSurface(this->sdlWindow);

            SDL_Event e;
            bool quit = false;
            while (!quit)
            {
                while (SDL_PollEvent(&e))
                {
                    if (e.type == SDL_QUIT)
                        quit = true;
                }
            }
        }
    }

    // Destroy window
    SDL_DestroyWindow(this->sdlWindow);

    // Quit SDL subsystems
    SDL_Quit();
}
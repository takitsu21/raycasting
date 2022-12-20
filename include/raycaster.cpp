#include "raycaster.h"

void Raycaster::createWindow() {
    this->mSdlWindow = nullptr;

    SDL_Surface *sdlSurface = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    } else {
        this->mSdlWindow = SDL_CreateWindow("Raycasting", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                            SCREEN_WIDTH,
                                            SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (this->mSdlWindow == nullptr) {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        } else {
            sdlSurface = SDL_GetWindowSurface(this->mSdlWindow);

            SDL_FillRect(this->mSdlSurface, nullptr, SDL_MapRGB(this->mSdlSurface->format, 0x00, 0x00, 0x00));

            this->drawRectangle();
            SDL_UpdateWindowSurface(this->mSdlWindow);

        }
    }
}

void Raycaster::waitEvent() {
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_KEYDOWN:
                    switch (e.key.keysym.sym) {
                        case SDLK_ESCAPE:
                            quit = true;
                            break;
                        default:
                            break;
                    }
                    break;
                case SDL_QUIT:
                    quit = true;
                    break;
                default:
                    break;
            }
        }
    }
    // Destroy window
    SDL_DestroyWindow(this->mSdlWindow);

    // Quit SDL subsystems
    SDL_Quit();
}

void Raycaster::drawRectangle() {
    SDL_Rect rect;
    rect.x = 200;
    rect.y = 200;
    rect.w = 100;
    rect.h = 100;
    std::cout << "Drawing rectangle" << std::endl;
    SDL_FillRect(this->mSdlSurface, &rect, SDL_MapRGB(this->mSdlSurface->format, 0xFF, 0x00, 0x00));
}

SDL_Window *Raycaster::getSdlWindow() {
    return this->mSdlWindow;
}


SDL_Surface *Raycaster::getSdlSurface() {
    return this->mSdlSurface;
}

void Raycaster::update() {
    SDL_UpdateWindowSurface(this->mSdlWindow);
}
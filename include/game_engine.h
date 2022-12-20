#ifndef RAYCASTING_GAME_ENGINE_H
#define RAYCASTING_GAME_ENGINE_H

#include "raycaster.h"

class GameController
{
private:
public:
};

enum GameState
{
    RUNNING,
    PAUSE,
    STOPPED
};

class GameEngine
{
private:
    // GameController mGameController;
    GameState mGameState;
    Raycaster *mRaycaster;

public:
    void run();

    void render();

    void stop();

    void processInput();

    void processLoop();
};

#endif // RAYCASTING_GAME_ENGINE_H
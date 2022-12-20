#include "game_engine.h"

void GameEngine::run()
{
    this->mGameState = GameState::RUNNING;
}

void GameEngine::render()
{
}

void GameEngine::stop()
{
    this->mGameState = GameState::STOPPED;
}

void GameEngine::processLoop()
{
    this->run();
    while (this->mGameState == GameState::RUNNING)
    {
        this->mRaycaster->update();
        this->render();
    }
    this->mRaycaster->waitEvent();
}


void GameEngine::processInput()
{
}
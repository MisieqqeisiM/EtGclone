#ifndef LOADING_SCREEN_H
#define LOADING_SCREEN_H

#include "GameStates/GameState.h"

class LoadingScreen : public GameState
{
public:
    void update() override;
    void draw() override;
    void load() override;
};

#endif
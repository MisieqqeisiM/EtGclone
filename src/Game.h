#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "GameStates/GameState.h"

class Game
{
public:
    Game();
    ~Game();
    void start();

private:
    sf::RenderWindow window;
    GameState *currentGameState;
    void mainLoop();
    void update();
    void draw(sf::RenderWindow *window);
};

#endif
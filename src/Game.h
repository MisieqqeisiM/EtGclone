#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "GameStates/GameState.h"
#include "TextureMenager.h"

class Game
{
public:
	Game();
	~Game();
	void start();

	TextureMenager *textureMenager;

private:
	sf::RenderWindow window;
	GameState *currentGameState;
	void mainLoop();
	void update();
	void draw();
};

#endif
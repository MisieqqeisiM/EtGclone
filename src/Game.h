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
	void stop();


	TextureMenager *textureMenager;

private:
	const unsigned int UPS = 80;
	bool running;

	sf::RenderWindow window;
	GameState *currentGameState;
	void mainLoop();
	void update(const sf::Time& time);
	void draw();
};

#endif
#ifndef GAME_STATE_H
#define GAME_STATE_H

#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
class GameState
{
public:
	virtual void update(sf::RenderWindow *window) = 0;							   //execute every frame
	virtual void draw(sf::RenderTarget &renderTarget) = 0; //draw every frame
	virtual void load() = 0;							   //load on initialization
	GameState *getNextState();
	bool hasFinished();

protected:
	GameState *nextState;
	bool finished = false;
};

#endif
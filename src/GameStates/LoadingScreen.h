#ifndef LOADING_SCREEN_H
#define LOADING_SCREEN_H

#include "GameStates/GameState.h"

class LoadingScreen : public GameState
{
public:
	void update(sf::RenderWindow *window, const sf::Time &time) override;
	void draw(sf::RenderTarget &renderTarget) override;
	void load() override;
};

#endif
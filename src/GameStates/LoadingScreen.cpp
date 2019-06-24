#include "GameStates/LoadingScreen.h"
#include "GameStates/Level.h"

#include <iostream>

void LoadingScreen::load()
{
	this->finished = true;								  //temporary
	this->nextState = new Level(0, new TextureMenager()); //temporary
}

void LoadingScreen::update(sf::RenderWindow *window, sf::Time time)
{
}

void LoadingScreen::draw(sf::RenderTarget &renderTarget)
{
}
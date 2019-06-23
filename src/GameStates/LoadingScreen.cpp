#include "GameStates/LoadingScreen.h"
#include "GameStates/Level.h"

#include <iostream>

void LoadingScreen::load()
{
	this->finished = true;							  //temporary
	this->nextState = new Level(0, TextureMenager()); //temporary
}

void LoadingScreen::update(sf::RenderWindow *window)
{

}

void LoadingScreen::draw(sf::RenderTarget &renderTarget)
{

}
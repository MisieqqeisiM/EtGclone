#include "GameStates/LoadingScreen.h"
#include "GameStates/Level.h"

#include <iostream>

void LoadingScreen::load()
{
	this->finished = true;			//temporary
	this->nextState = new Level(0); //temporary
}

void LoadingScreen::update()
{
}

void LoadingScreen::draw(sf::RenderTarget &renderTarget)
{
}
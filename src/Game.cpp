#include "Game.h"
#include "GameStates/LoadingScreen.h"

#include <iostream>

Game::Game() : window(sf::VideoMode::getDesktopMode(), "Gra", sf::Style::Fullscreen)
{
	this->start();
	this->mainLoop();
}

Game::~Game()
{
	if (this->currentGameState != nullptr)
		delete this->currentGameState;
}

void Game::start()
{
	this->running = true;
	this->currentGameState = new LoadingScreen();
	this->currentGameState->load();
}

void Game::stop()
{
	this->window.close();
	this->running = false;
}

void Game::mainLoop()
{
	sf::Clock clock;
	sf::Time lastTime = clock.restart();
	double microsPerUpdate = 1000000.0 / UPS;
	double delta = 0.0;
	while (this->running)
	{
		sf::Time now = clock.getElapsedTime();
		delta += (now.asMicroseconds() - lastTime.asMicroseconds()) / microsPerUpdate;
		lastTime = now;
		while (delta >= 1.0)
		{
			this->update(now);
			this->draw();
			delta -= 1.0;
		}
	}
}

void Game::update(const sf::Time &time)
{
	//check for closing events
	sf::Event event;
	while (this->window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			this->window.close();
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		this->stop();
	}

	//update current game state
	this->currentGameState->update(&window, time);

	//move to next game state if necessary
	if (this->currentGameState->hasFinished())
	{
		GameState *newState = this->currentGameState->getNextState();
		delete this->currentGameState;
		this->currentGameState = newState;
		this->currentGameState->load();
	}
}

void Game::draw()
{
	this->window.clear();
	this->currentGameState->draw(this->window);
	this->window.display();
}
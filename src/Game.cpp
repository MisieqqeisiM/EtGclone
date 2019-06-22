#include "Game.h"
#include "GameStates/LoadingScreen.h"

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
	this->currentGameState = new LoadingScreen();
	this->currentGameState->load();
}

void Game::mainLoop()
{
	while (this->window.isOpen())
	{
		this->update();
		this->draw(&window);
	}
}

void Game::update()
{
	//check for closing events
	sf::Event event;
	while (window.pollEvent(event))
		if (event.type == sf::Event::Closed)
			this->window.close();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
		this->window.close();

	//update current game state
	this->currentGameState->update();

	//move to next game state if necessary
	if (this->currentGameState->hasFinished())
	{
		GameState *newState = this->currentGameState->getNextState();
		delete this->currentGameState;
		this->currentGameState = newState;
		this->currentGameState->load();
	}
}

void Game::draw(sf::RenderWindow *window)
{
	this->currentGameState->draw();
	window->display();
}
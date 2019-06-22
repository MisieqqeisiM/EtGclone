#include "Player.h"

Player::Player(sf::Vector2f position, sf::Vector2f size)
{
	this->position = position;
	this->size = size;
	this->load();
}

void Player::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) 
		{
			this->movePos(sf::Vector2f(-(this->speed), this->speed));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) 
		{
			this->movePos(sf::Vector2f(this->speed, this->speed));
		}
		else 
		{
			this->movePos(sf::Vector2f(this->speed, 0.0f));
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			this->movePos(sf::Vector2f(-(this->speed), -(this->speed)));
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			this->movePos(sf::Vector2f(-(this->speed), this->speed));
		}
		else
		{
			this->movePos(sf::Vector2f(-(this->speed), 0.0f));
		}
	}
}

void Player::load()
{

}
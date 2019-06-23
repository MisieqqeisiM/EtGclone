#include "Player.h"

#include <iostream>
#include <cmath>

Player::Player(sf::Vector2f position, sf::Vector2f size)
{
	this->position = position;
	this->size = size;
	this->load();
}

void Player::update(sf::RenderWindow *window)
{
	sf::Vector2f mouse = (sf::Vector2f)sf::Mouse::getPosition(*window);
	sf::Vector2f origin(window->getSize().x / 2, window->getSize().y / 2);
	sf::Vector2f normalized = origin - mouse;
	float distance = sqrt(pow(normalized.x, 2) + pow(normalized.y, 2));
	normalized = normalized / distance;
	if (normalized.x > -0.5 && normalized.x<0.5 && normalized.y>sqrt(3) / 2)
	{
		this->dir = Entity::direction::NORTH;
	}
	else if (normalized.y > 0.5 && normalized.y<sqrt(3) / 2 && normalized.x>0.5 && normalized.x < sqrt(3) / 2)
	{
		this->dir = Entity::direction::NORTH_WEST;
	}
	else if (normalized.y > 0.5 && normalized.y < sqrt(3) / 2 && normalized.x>-sqrt(3) / 2 && normalized.x < -0.5)
	{
		this->dir = Entity::direction::NORTH_EAST;
	}
	else if (normalized.x > -0.5 && normalized.x < 0.5 && normalized.y < -(sqrt(3) / 2))
	{
		this->dir = Entity::direction::SOUTH;
	}
	else if (normalized.y > -sqrt(3) / 2 && normalized.y<-0.5 && normalized.x>0.5 && normalized.x < sqrt(3) / 2)
	{
		this->dir = Entity::direction::SOUTH_WEST;
	}
	else if (normalized.y > -sqrt(3) / 2 && normalized.y<-0.5 && normalized.x>-sqrt(3) / 2 && normalized.x < -0.5)
	{
		this->dir = Entity::direction::SOUTH_EAST;
	}
	else if (normalized.x > sqrt(3) / 2 && normalized.y<0.5 && normalized.y>-0.5)
	{
		this->dir = Entity::direction::WEST;
	}
	else if (normalized.x < -sqrt(3) / 2 && normalized.y<0.5 && normalized.y>-0.5)
	{
		this->dir = Entity::direction::EAST;
	}
	else
	{
		
	}

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

void Player::draw()
{

}
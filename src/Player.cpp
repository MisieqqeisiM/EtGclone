#include "Player.h"

#include "atlasData.h"
#include "TextureMenager.h"

#include <iostream>
#include <cmath>

Player::Player(sf::Vector2f position)
{
	this->position = position;
	this->load();
}
Player::Player() 
{
	this->position = sf::Vector2f(0.0f, 0.0f);
	if (!this->texture.loadFromFile("res/entities.png")) 
	{
		std::cout << "Couldn't load file" << std::endl;
	}
	this->speed = 1.0f;
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

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		this->movePos(sf::Vector2f(0.0f, -(this->speed)));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		this->movePos(sf::Vector2f(0.0f, this->speed));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		this->movePos(sf::Vector2f(-(this->speed), 0.0f));
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		this->movePos(sf::Vector2f(this->speed, 0.0f));
	}
}

void Player::load()
{

}

void Player::draw(sf::RenderTarget *window, const TextureMenager& texMenager) 
{

	std::cout << position.x << " | " << position.y << std::endl;
	this->sprite.setTexture(this->texture);
	this->sprite.setPosition(this->position);
	this->sprite.setTextureRect(texMenager.getRegion(Atlas::ENTITIES, EntityType::PLAYER, 0, 0));
	window->draw(this->sprite);
}
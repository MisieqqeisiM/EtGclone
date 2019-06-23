#include "Entity.h"

sf::Vector2f Entity::getPosition() const
{
	return this->position;
}
sf::Vector2f Entity::getSize() const
{
	return this->size;
}
Entity::direction Entity::getDirection() const
{
	return this->dir;
}

float Entity::getSpeed() const 
{
	return this->speed;
}

void Entity::setPosition(sf::Vector2f pos)
{
	this->position = pos;
}
void Entity::setSize(sf::Vector2f size)
{
	this->size = size;
}
void Entity::setSpeed(float speed) 
{
	this->speed = speed;
}

void Entity::movePos(sf::Vector2f change) 
{
	this->position += change;
}

void Entity::update() 
{

}
void Entity::load() 
{
	
}
void Entity::draw()
{

}
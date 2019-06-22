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
void Entity::setPosition(sf::Vector2f pos)
{
	this->position = pos;
}
void Entity::setSize(sf::Vector2f size)
{
	this->size = size;
}
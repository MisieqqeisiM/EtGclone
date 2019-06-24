#include "Entity.h"


Entity::~Entity()
{

}

sf::Vector2f Entity::getPosition() const
{
	return this->position;
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
void Entity::draw(sf::RenderTarget *window, const TextureMenager& texMenager, const sf::Time& time)
{

}
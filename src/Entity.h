#pragma once

#include <SFML/Graphics.hpp>

#include "TextureMenager.h"

class Entity
{
public:
	enum direction { NORTH, NORTH_EAST, EAST, SOUTH_EAST, SOUTH, SOUTH_WEST, WEST, NORTH_WEST };
protected:
	sf::Vector2f position;
	float speed;
	direction dir;

	sf::Sprite sprite;
public:
	~Entity();
	sf::Vector2f getPosition() const;
	direction getDirection() const;
	float getSpeed() const;
	void setPosition(sf::Vector2f pos);
	void setDirection(direction dir);
	void setSpeed(float speed);

	void movePos(sf::Vector2f change);

	virtual void update();
	virtual void load();
	virtual void draw(sf::RenderTarget *window, const TextureMenager& texMenager, const sf::Time& time);
};


#pragma once

#include <SFML/Graphics.hpp>

#include "TextureMenager.h"

class Entity
{
public:
	enum direction { NONE, NORTH, NORTH_EAST, NORTH_WEST, SOUTH, SOUTH_EAST, SOUTH_WEST, EAST, WEST };
protected:
	sf::Vector2f position;
	float speed;
	direction dir;

	sf::Sprite sprite;
	sf::Texture texture;
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
	virtual void draw();
};


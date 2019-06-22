#pragma once

#include <SFML/Graphics.hpp>

class Entity
{
public :
	enum direction { NORTH, NORTH_EAST, NORTH_WEST, SOUTH_EAST, SOUTH_WEST, EAST, WEST };
protected:
	sf::Texture *currentTexture;
	sf::Vector2f position;
	sf::Vector2f size;
	float speed;
	direction dir;
public:

	sf::Vector2f getPosition() const;
	sf::Vector2f getSize() const;
	direction getDirection() const;
	float getSpeed() const;
	void setPosition(sf::Vector2f pos);
	void setSize(sf::Vector2f size);
	void setDirection(direction dir);
	void setSpeed(float speed);

	void movePos(sf::Vector2f change);

	virtual void update();
	virtual void load();
};


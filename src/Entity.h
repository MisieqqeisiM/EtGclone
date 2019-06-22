#pragma once

#include <SFML/Graphics.hpp>

class Entity
{
public :
	enum direction { NORTH, NORTH_EAST, NORTH_WEST, SOUTH_EAST, SOUTH_WEST, EAST, WEST };
private:
	sf::Texture *currentTexture;
	sf::Vector2f position;
	sf::Vector2f size;
	direction dir;
public:

	sf::Vector2f getPosition() const;
	sf::Vector2f getSize() const;
	direction getDirection() const;
	void setPosition(sf::Vector2f pos);
	void setSize(sf::Vector2f size);
	void setDirection(direction dir);

	virtual void update();
	virtual void load();
};


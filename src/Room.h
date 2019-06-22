#ifndef ROOM_H
#define ROOM_H

#include "Tile.h"
#include <SFML/System/Vector2.hpp>

class Room
{
public:
	Room(int x, int y, int width, int height);
	~Room();
	Tile getTile(int x, int y);
	void setTile(int x, int y, Tile tile);
	bool isAir(sf::Vector2f position);

private:
	int x, y;
	int width,
		height;
	Tile *tiles;
};

#endif
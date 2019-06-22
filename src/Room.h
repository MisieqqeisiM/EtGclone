#ifndef ROOM_H
#define ROOM_H

#include "Tile.h"
#include <vector>
#include <SFML/System/Vector2.hpp>

class Room
{
public:
	Room(int x, int y, int width, int height);
	~Room();
	Tile getTile(int x, int y) const;
	void setTile(int x, int y, Tile tile);
	bool isAir(sf::Vector2f position) const;

private:
	int x, y;
	int width,
		height;
	std::vector<Tile> tiles;
};

#endif
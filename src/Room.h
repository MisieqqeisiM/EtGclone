#ifndef ROOM_H
#define ROOM_H

#include "Tile.h"
#include "TileMap.h"
#include <vector>
#include <SFML/System/Vector2.hpp>

class Room
{
public:
	Room(int x, int y, int id);
	~Room();
	int getWidth() const;
	int getHeight() const;
	int getX() const;
	int getY() const;
	Tile getTile(int x, int y) const;
	void paste(TileMap &tilemap) const;
	void move(int x, int y);

private:
	int x, y;
	int width,
		height;
	int id;
	friend class RoomRenderer;
};

#endif
#ifndef ROOM_H
#define ROOM_H

#include "Tile.h"
#include "TileMap.h"
#include "levelData.h"
#include <vector>
#include <SFML/System/Vector2.hpp>

class Room
{
public:
	virtual int getWidth() const = 0;
	virtual int getHeight() const = 0;
	virtual int getX() const = 0;
	virtual int getY() const = 0;
	virtual Tile getTile(int x, int y) const = 0;
	virtual int getDoorCount() const = 0;
	virtual Door getDoor(int id) const = 0;
	void paste(TileMap &tilemap) const;
	virtual void move(int x, int y) = 0;

private:
	friend class RoomRenderer;
};

#endif
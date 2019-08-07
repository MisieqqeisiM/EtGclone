#include "Room.h"
#include <cmath>
#include "levelData.h"
Room::Room(int x, int y, int id)
{
	this->x = x;
	this->y = y;
	this->id = id;
}

int Room::getWidth() const
{
	return roomTemplates[id].tilemap.getWidth();
}

int Room::getHeight() const
{
	return roomTemplates[id].tilemap.getHeight();
}

int Room::getX() const
{
	return this->x;
}

int Room::getY() const
{
	return this->y;
}
void Room::paste(TileMap &tilemap) const
{
	tilemap.paste(roomTemplates[id].tilemap, this->x, this->y);
}
Tile Room::getTile(int x, int y) const
{
	return roomTemplates[this->id].tilemap.getTile(x, y);
}
void Room::move(int x, int y)
{
	this->x += x;
	this->y += y;
}
Room::~Room()
{
}
#include "levelData.h"
#include "BasicRoom.h"
#include <cmath>
BasicRoom::BasicRoom(int x, int y, int id)
{
    this->x = x;
    this->y = y;
    this->id = id;
}

int BasicRoom::getWidth() const
{
    return roomTemplates[id].tilemap.getWidth();
}

int BasicRoom::getHeight() const
{
    return roomTemplates[id].tilemap.getHeight();
}

int BasicRoom::getX() const
{
    return this->x;
}

int BasicRoom::getY() const
{
    return this->y;
}
Tile BasicRoom::getTile(int x, int y) const
{
	return roomTemplates[this->id].tilemap.getTile(x, y);
}
void BasicRoom::move(int x, int y)
{
	this->x += x;
	this->y += y;
}
int BasicRoom::getDoorCount() const
{
    return roomTemplates[this->id].doors.size();
}
Door BasicRoom::getDoor(int id) const
{
    Door door = roomTemplates[this->id].doors[id];
    door.placement.first += x;
    door.placement.second += y;
    door.destination.first += std::floor(x/20.0);
    door.destination.second += std::floor(y/20.0);
    return door;
}
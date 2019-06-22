#include "Room.h"
#include <cmath>
Room::Room(int x, int y, int width, int height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->tiles = new Tile[width * height];
}

Tile Room::getTile(int x, int y)
{
	if (x >= 0 && x < this->width && y >= 0 && y < this->height)
		return this->tiles[x * this->height + y];
	else
		return Tile{NONE};
}

void Room::setTile(int x, int y, Tile tile)
{
	if (x >= 0 && x < this->width && y >= 0 && y < this->height)
		this->tiles[x * this->height + y] = tile;
}

bool Room::isAir(sf::Vector2f position)
{
	return this->getTile(std::floor(position.x - this->x), std::floor(position.y - this->y)).isAir();
}

Room::~Room()
{
	delete this->tiles;
};
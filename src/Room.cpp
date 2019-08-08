#include "Room.h"
#include <cmath>
#include "levelData.h"

void Room::paste(TileMap &tilemap) const
{
	for (int y = 0; y < this->getWidth(); y++)
	{
		for (int x = 0; x < this->getWidth(); x++)
		{
			Tile tile = this->getTile(x, y);
			if (tile.type != NONE)
				tilemap.setTile(tile, this->getX() + x, this->getY() + y);
		}
	}
}
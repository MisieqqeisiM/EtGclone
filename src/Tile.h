#ifndef TILE_H
#define TILE_H

enum TileType
{
	FLOOR,
	WALL,
	NONE
};

struct Tile
{
	TileType type;
	bool isAir()
	{
		return type == NONE || type == FLOOR;
	}
};

#endif
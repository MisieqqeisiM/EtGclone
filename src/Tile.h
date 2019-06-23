#ifndef TILE_H
#define TILE_H

enum TileType
{
	NONE,
	FLOOR,
	WALL
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
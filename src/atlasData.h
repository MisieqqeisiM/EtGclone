
#ifndef ATLAS_DATA_H
#define ATLAS_DATA_H
#include <vector>
#include <string>
#include "Tile.h"

enum WallType
{
	FRONT,
	BACK,
	LEFT,
	RIGHT,
	LEFT_CORNER,
	RIGHT_CORNER,
	LEFT_TURN,
	RIGTH_TURN
};

struct TexData
{
	sf::IntRect rect;
	int framesX, framesY;
};

struct AtlasData
{
	std::string fileName;
	std::vector<TexData> regions;
};

enum Atlas
{
	ENTITIES,
	TILES
};
enum EntityType
{
	PLAYER,
	ENEMY_1
};

const std::vector<AtlasData> atlasData = {
	{"entities.png",
	 {
		 {{0, 0, 32, 32}, 8, 1}, //Player
		 {{0, 32, 32, 32}, 8, 1} //Random Enemy
	 }},
	{"tiles.png",
	 {
		 {{0, 0, 32, 32}, 1, 1}, //Floor
		 {{32, 0, 32, 32}, 8, 1} //Wall
	 }}};

#endif
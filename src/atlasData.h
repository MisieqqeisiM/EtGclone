
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
enum Entity
{
	PLAYER,
	ENEMY_1
};

std::vector<AtlasData> atlasData = {
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

sf::IntRect getRegion(Atlas atlasType, int objectType, int frameX, int frameY = -1)
{
	TexData tex = atlasData[atlasType].regions[objectType];
	if (frameY == -1)
	{
		int frame = frameX;
		frameX = frame % tex.framesX;
		frameY = frame / tex.framesX;
	}
	return {tex.rect.left + frameX * tex.rect.width, tex.rect.top + frameY * tex.rect.height, tex.rect.width, tex.rect.height};
}
#endif
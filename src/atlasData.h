
#ifndef ATLAS_DATA_H
#define ATLAS_DATA_H
#include <vector>
#include <string>
#include "Tile.h"
struct TexData
{
	sf::IntRect rect;
	int frames;
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
		 {sf::IntRect(0, 0, 32 * 8, 32), 8}, //Player
		 {sf::IntRect(0, 32, 32 * 8, 32), 8} //Random Enemy
	 }},
	{"tiles.png",
	 {
		 {sf::IntRect(0, 0, 32, 32), 1}, //Floor
		 {sf::IntRect(32, 0, 32, 32), 1} //Wall
	 }}};

#endif
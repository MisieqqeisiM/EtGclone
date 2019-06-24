#ifndef TEXTURE_MENAGER_H
#define TEXTURE_MENAGER_H

#include <SFML/Graphics.hpp>
#include "atlasData.h"
#include <vector>
#include <string>

class TextureMenager
{
public:
	TextureMenager();
	~TextureMenager();
	sf::Texture const &getTexture(int id) const;
	sf::IntRect getRegion(Atlas atlasType, int objectType, int frameX, int frameY = -1) const;

private:
	sf::Texture *loadTexture(const std::string &path);
	std::vector<std::string> paths;
	std::vector<sf::Texture *> textureImages;
};

#endif
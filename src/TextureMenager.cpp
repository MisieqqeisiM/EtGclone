#include "TextureMenager.h"

#include <iostream>

TextureMenager::TextureMenager()
{
	for (AtlasData data : atlasData)
	{
		this->textureImages.push_back(loadTexture("res/" + data.fileName));
	}
}
TextureMenager::~TextureMenager()
{
	for (sf::Texture *texture : this->textureImages)
	{
		delete texture;
	}
}
sf::Texture *TextureMenager::loadTexture(const std::string &path)
{
	sf::Texture *image = new sf::Texture();
	if (!image->loadFromFile(path))
	{
		std::cerr << "Couldn't open file: " << path << std::endl;
	}
	return image;
}

sf::Texture const &TextureMenager::getTexture(int id) const
{
	return *(this->textureImages[id]);
}

sf::IntRect TextureMenager::getRegion(Atlas atlasType, int objectType, int frameX, int frameY) const
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
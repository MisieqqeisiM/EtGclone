#include "TextureMenager.h"

#include <iostream>

TextureMenager::TextureMenager(std::vector<std::string> pathsVector)
{
	this->paths = pathsVector;
	for (std::string path : paths) 
	{
		this->textureImages.push_back(LoadTexture(path));
	}
}

sf::Texture TextureMenager::LoadTexture(const std::string& path)
{
	sf::Texture image;
	if (!image.loadFromFile(path)) 
	{
		std::cerr << "Couldn't open file: " << path << std::endl;
	}
	else 
	{
		return image;
	}
}

sf::Texture* TextureMenager::GetTexturePtr(int id) 
{
	return &(this->textureImages[id]);
}
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

sf::Image TextureMenager::LoadTexture(const std::string& path)
{
	sf::Image image;
	if (!image.loadFromFile(path)) 
	{
		std::cerr << "Couldn't open file: " << path << std::endl;
	}
	else 
	{
		return image;
	}
}

sf::Image* TextureMenager::GetTexturePtr(int id) 
{
	return &(this->textureImages[id]);
}
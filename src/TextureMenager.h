#ifndef TEXTURE_MENAGER_H
#define TEXTURE_MENAGER_H

#include <SFML/Graphics.hpp>

#include <vector>
#include <string>

class TextureMenager
{
private:
	std::vector<std::string> paths;
	std::vector<sf::Image> textureImages;
public:
	TextureMenager(std::vector<std::string> pathsVector);
	sf::Image* GetTexturePtr(int id);
private:
	sf::Image LoadTexture(const std::string& path);
};

#endif
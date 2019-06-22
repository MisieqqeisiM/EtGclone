#ifndef TEXTURE_MENAGER_H
#define TEXTURE_MENAGER_H

#include <SFML/Graphics.hpp>

#include <vector>
#include <string>

class TextureMenager
{
private:
	std::vector<std::string> paths;
	std::vector<sf::Texture> textureImages;
public:
	TextureMenager(std::vector<std::string> pathsVector);
	sf::Texture* GetTexturePtr(int id);
private:
	sf::Texture LoadTexture(const std::string& path);
};

#endif
#ifndef PLAYER_RENDERER_H
#define PLAYER_RENDERER_H

#include "Player.h"
#include "TextureMenager.h"

class PlayerRenderer
{
public:
	PlayerRenderer(const Player& player);
	void draw(sf::RenderTarget *window, const TextureMenager &texMenager, sf::Time time);
private:
	sf::Sprite sprite;
	sf::Texture *texture;
	const Player& player;

};

#endif
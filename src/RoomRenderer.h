#ifndef ROOM_RENDERER_H
#define ROOM_RENDERER_H

#include "Room.h"
#include "TextureMenager.h"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <vector>

class RoomRenderer
{
public:
	RoomRenderer(const Room &room, const TextureMenager &textureMenager);
	void draw(sf::RenderTarget &renderTarget);

private:
	const Room &room;
	std::vector<sf::Sprite> tiles;
};

#endif
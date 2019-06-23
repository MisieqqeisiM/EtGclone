#ifndef ROOM_RENDERER_H
#define ROOM_RENDERER_H

#include "Room.h"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <vector>

class RoomRenderer
{
public:
	RoomRenderer(Room const &room);
	void draw(sf::RenderTarget &renderTarget);

private:
	const Room &room;
	std::vector<sf::Sprite> tiles;
};

#endif
#include "RoomRenderer.h"
#include "atlasData.h"

RoomRenderer::RoomRenderer(const Room &room) : room(room)
{
	tiles.reserve(room.getWidth() * (room.getHeight() + 1));
	for (int y = 0; y < room.getHeight(); y++)
	{
		for (int x = 0; x < room.getWidth(); x++)
		{
			switch (room.tiles[x * room.getHeight() + y].type)
			{
			case FLOOR:
				sf::Sprite sprite;
				sprite.setColor(sf::Color::Red);
				sprite.setTextureRect(atlasData[TILES].regions[0].rect);
				sprite.setPosition(x * 32, y * 32);
				tiles.push_back(std::move(sprite));
				break;
			}
		}
	}
}
void RoomRenderer::draw(sf::RenderTarget &renderTarget)
{
	for (sf::Sprite sprite : this->tiles)
	{
		renderTarget.draw(sprite);
	}
}
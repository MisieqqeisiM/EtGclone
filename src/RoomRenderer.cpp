#include "RoomRenderer.h"
#include <iostream>
WallType getWallType(const Room &room, int x, int y)
{
	bool a = room.getTile(x - 1, y - 1).type == FLOOR;
	bool b = room.getTile(x, y - 1).type == FLOOR;
	bool c = room.getTile(x + 1, y - 1).type == FLOOR;
	bool d = room.getTile(x - 1, y).type == FLOOR;
	bool e = room.getTile(x + 1, y).type == FLOOR;
	bool f = room.getTile(x - 1, y + 1).type == FLOOR;
	bool g = room.getTile(x, y + 1).type == FLOOR;
	bool h = room.getTile(x + 1, y + 1).type == FLOOR;
	if (g)
		return FRONT;
	if (!a && !b && !d && !f && !g && (e || h))
		return RIGHT;
	if (!b && !c && !e && !g && !h && (d || f))
		return LEFT;
	if (b && !d && !e && !f && !g && !h)
		return BACK;
	if (a && !b && !c && !d && !e && !f && !g && !h)
		return LEFT_CORNER;
	if (c && !a && !b && !d && !e && !f && !g && !h)
		return RIGHT_CORNER;
	if ((a || b || c) && (a || d || f) && !e && !g && !h)
		return LEFT_TURN;
	if ((a || b || c) && (c || e || h) && !d && !f && !g)
		return RIGTH_TURN;
	return FRONT;
}
RoomRenderer::RoomRenderer(const Room &room, const TextureMenager &textureMenager) : room(room)
{
	tiles.reserve(room.getWidth() * (room.getHeight() + 1));
	for (int y = 0; y < room.getHeight(); y++)
	{
		for (int x = 0; x < room.getWidth(); x++)
		{
			Tile tile = room.getTile(x, y);
			if (tile.type == NONE)
				continue;

			sf::Sprite sprite(textureMenager.getTexture(TILES));
			switch (tile.type)
			{
			case FLOOR:
				sprite.setTextureRect(textureMenager.getRegion(TILES, FLOOR, 0));
				break;
			case WALL:
				WallType wall_type = getWallType(room, x, y);
				sprite.setTextureRect(textureMenager.getRegion(TILES, WALL, wall_type));
				break;
			}
			sprite.setPosition((x + room.getX()) * 32, (y + room.getY()) * 32);
			tiles.push_back(std::move(sprite));
		}
	}
}
void RoomRenderer::draw(sf::RenderTarget &renderTarget)
{
	for (sf::Sprite &sprite : this->tiles)
	{
		renderTarget.draw(sprite);
	}
}
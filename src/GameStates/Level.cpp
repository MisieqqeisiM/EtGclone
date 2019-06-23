#include "GameStates/Level.h"

Level::Level(int id)
{
	this->id = id;
	//temporary generation
	this->rooms.push_back(Room(0, 0, 20, 20));
	this->roomRenderers.push_back(RoomRenderer(this->rooms[0]));
}

void Level::update() {}
void Level::draw(sf::RenderTarget &renderTarget)
{
	for (RoomRenderer renderer : this->roomRenderers)
		renderer.draw(renderTarget);
}
void Level::load() {}
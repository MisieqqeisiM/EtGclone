#include "GameStates/Level.h"

Level::Level(int id, const TextureMenager &textureMenager) : textureMenager(textureMenager)
{
	this->id = id;
	//temporary generation
	this->rooms.push_back(Room(0, 0, 20, 20));
	this->roomRenderers.push_back(RoomRenderer(this->rooms[0], textureMenager));
}

void Level::update(sf::RenderWindow *window)
{
	this->player.update(window);
}
void Level::draw(sf::RenderTarget &renderTarget)
{
	for (RoomRenderer renderer : this->roomRenderers)
		renderer.draw(renderTarget);
	player.draw(&renderTarget, this->textureMenager);
}
void Level::load() {}
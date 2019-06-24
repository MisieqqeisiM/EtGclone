#include "GameStates/Level.h"

Level::Level(int id, const TextureMenager *textureMenager) : textureMenager(textureMenager)
{
	this->id = id;
	//temporary generation
	this->rooms.push_back(Room(0, 0, 20, 20));
	this->roomRenderers.push_back(RoomRenderer(this->rooms[0], *textureMenager));
}
Level::~Level()
{
	delete this->textureMenager; //temporary
}
void Level::update(sf::RenderWindow *window, const sf::Time &time)
{
	this->time = time;
	this->player.update(window);
}
void Level::draw(sf::RenderTarget &renderTarget)
{
	sf::View view = renderTarget.getDefaultView();
	view.setCenter((int)(player.getPosition().x * 32), (int)(player.getPosition().y * 32));

	renderTarget.setView(view);
	for (RoomRenderer renderer : this->roomRenderers)
		renderer.draw(renderTarget);
	player.draw(&renderTarget, *(this->textureMenager), this->time);
}
void Level::load() {}
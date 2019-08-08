#include "GameStates/Level.h"

Level::Level(int id, const TextureMenager *textureMenager) : textureMenager(textureMenager)
{
	this->id = id;
	this->floor = new Floor();
	for(const Room& room : this->floor->rooms)
		this->roomRenderers.push_back(RoomRenderer(room, *textureMenager));
	for(const Room& room : this->floor->corridors)
		this->roomRenderers.push_back(RoomRenderer(room, *textureMenager));
}
Level::~Level()
{
	delete this->floor;
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
	view.zoom(10.0f);
	renderTarget.setView(view);
	for (RoomRenderer renderer : this->roomRenderers)
	{
		renderer.draw(renderTarget);
	}
	//this->playerRenderer->draw(&renderTarget, *(this->textureMenager), this->time);
}
void Level::load() {}
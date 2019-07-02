#include "PlayerRenderer.h"



PlayerRenderer::PlayerRenderer(const Player& player)
	:player(player)
{

}

void PlayerRenderer::draw(sf::RenderTarget *window, const TextureMenager &texMenager, sf::Time time)
{
	int frame = ((long)time.asSeconds() * 2) % 3;
	this->sprite.setTexture(texMenager.getTexture(ENTITIES));
	this->sprite.setPosition(this->player.getPosition().x * 32, this->player.getPosition().y * 32);
	this->sprite.setTextureRect(texMenager.getRegion(Atlas::ENTITIES, EntityType::PLAYER, frame, this->player.getDirection()));
	window->draw(this->sprite);
}
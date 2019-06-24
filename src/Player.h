#ifndef PLAYER_H
#define PLAYER_H


#include "Entity.h"
#include <SFML/Graphics.hpp>

class Player :
	public Entity
{
private:
	
public:
	Player(sf::Vector2f position);
	Player();

	void update(sf::RenderWindow *window);
	void load() override;
	void draw(sf::RenderTarget *window, const TextureMenager& texMenager, const sf::Time& time) override;
};

#endif
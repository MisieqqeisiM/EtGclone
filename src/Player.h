#pragma once
#include "Entity.h"
class Player :
	public Entity
{
private:
	
public:
	Player(sf::Vector2f position, sf::Vector2f size);

	void update() override;
	void load() override;
};
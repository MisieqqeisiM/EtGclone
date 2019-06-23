#ifndef PLAYER
#define PLAYER


#include "Entity.h"
#include <SFML/Graphics.hpp>

class Player :
	public Entity
{
private:
	
public:
	Player(sf::Vector2f position, sf::Vector2f size);

	void update(sf::RenderWindow *window);
	void load() override;
	void draw() override;
};

#endif
#ifndef LEVEL_H
#define LEVEL_H

#include "GameStates/GameState.h"
#include <vector>
#include "Room.h"
#include "RoomRenderer.h"
#include "TextureMenager.h"
#include "Player.h"
#include "PlayerRenderer.h"
#include "Floor.h"
class Level : public GameState
{
public:
	Level(int id, const TextureMenager *textureMenager);
	~Level();
	void load() override;
	void update(sf::RenderWindow *window, const sf::Time &time) override;
	void draw(sf::RenderTarget &renderTarget) override;

private:
	int id;
	sf::Time time;
	Floor *floor;
	std::vector<RoomRenderer> roomRenderers;
	Player player;
	PlayerRenderer *playerRenderer;
	const TextureMenager *textureMenager;
};

#endif
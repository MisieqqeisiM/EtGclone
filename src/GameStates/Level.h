#ifndef LEVEL_H
#define LEVEL_H

#include "GameStates/GameState.h"
#include <vector>
#include "Room.h"
#include "RoomRenderer.h"
#include "TextureMenager.h"
#include "Player.h"

class Level : public GameState
{
public:
	Level(int id, const TextureMenager &textureMenager);
	void load() override;
	void update(sf::RenderWindow *window) override;
	void draw(sf::RenderTarget &renderTarget) override;

private:
	int id;
	std::vector<Room> rooms;
	std::vector<RoomRenderer> roomRenderers;
	Player player;
	const TextureMenager &textureMenager;
};

#endif
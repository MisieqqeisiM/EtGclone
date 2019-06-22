#ifndef LEVEL_H
#define LEVEL_H

#include "GameStates/GameState.h"
#include <vector>
#include "Room.h"
class Level : public GameState
{
public:
	Level(int id);
	void load() override;
	void update() override;
	void draw() override;

private:
	int id;
	std::vector<Room> rooms;
};

#endif
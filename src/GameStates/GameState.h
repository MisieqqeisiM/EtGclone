#ifndef GAME_STATE_H
#define GAME_STATE_H

class GameState
{
public:
	virtual void update() = 0; //execute every frame
	virtual void draw() = 0;   //draw every frame
	virtual void load() = 0;   //load on initialization
	GameState *getNextState();
	bool hasFinished();

protected:
	GameState *nextState;
	bool finished = false;
};

#endif
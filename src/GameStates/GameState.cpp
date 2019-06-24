#include "GameStates/GameState.h"

bool GameState::hasFinished()
{
	return this->finished;
}

GameState *GameState::getNextState()
{
	return this->nextState;
}
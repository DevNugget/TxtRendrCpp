#ifndef PLAYER_H
#define PLAYER_H

#include "GameScreen.h"

class Player {
public:
	int XPosition;
	int YPosition;

	char Tile = '@';

	void SetPosition(int xPos, int yPos, Player& player);
	void UpdatePosition(GameScreen& gameScreen, Player& player);
};

#endif // !PLAYER_H

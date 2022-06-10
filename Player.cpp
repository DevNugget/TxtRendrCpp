#include "Player.h"
#include "GameScreen.h"

void Player::SetPosition(int xPos, int yPos, Player& player)
{
	player.XPosition = xPos;
	player.YPosition = yPos;
}

void Player::UpdatePosition(GameScreen& gameScreen, Player& player)
{
	gameScreen.CanvasObjects[player.YPosition].object[player.XPosition] = player.Tile;
}

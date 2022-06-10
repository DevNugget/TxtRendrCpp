#include <iostream>
#include "GameScreen.h"
#include "Player.h"

int main()
{
    GameScreen gameScreen = GameScreen();
    Player player = Player();
    
    gameScreen.InitScreenSize(24, 8, gameScreen);
    
    gameScreen.GenerateCanvas(gameScreen);

    player.SetPosition(12, 4, player);
    player.UpdatePosition(gameScreen, player);

    gameScreen.DisplayCanvas(gameScreen);
    
    return 0;
}
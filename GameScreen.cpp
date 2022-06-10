#include <iostream>
#include <stdlib.h>

#include "GameScreen.h"
#include "Tiles.h"
#include "Utility.h"

Tiles tiles = Tiles();

void GameScreen::InitScreenSize(int screenW, int screenH, GameScreen& gameScreen)
{
	gameScreen.ScreenWidth = screenW;
	gameScreen.ScreenHeight = screenH;
}

void GameScreen::GenerateCanvas(GameScreen& gameScreen)
{
	for (int y = 0; y < gameScreen.ScreenHeight; y++) {
		std::string HortizontalScanLine;
		for (int x = 0; x < gameScreen.ScreenWidth; x++) {
			HortizontalScanLine.std::string::append(tiles.airTile);
		}
		gameScreen.CanvasObjects[y].object = HortizontalScanLine;
	}	
}

void GameScreen::DisplayCanvas(GameScreen& gameScreen) {
	HANDLE hStdout;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	ClearScreen(hStdout);
	
	for (int y = 0; y < gameScreen.ScreenHeight; y++) {
		std::cout << gameScreen.CanvasObjects[y].object << '\n';
	}
}


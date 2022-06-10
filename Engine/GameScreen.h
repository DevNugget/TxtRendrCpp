#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#define VERTICLE_OBJECTS 100

#include "EngineTypes.h"
#include <string>

class GameScreen {
	int ScreenWidth;
	int ScreenHeight;
    
public:
	ScreenArray CanvasObjects[VERTICLE_OBJECTS];

	bool IsRunning = true;
	
	void InitScreenSize(int screenW, int screenH, GameScreen& gameScreen);
	void GenerateCanvas(GameScreen& gameScreen);
	void DisplayCanvas(GameScreen& gameScreen);
};

#endif // !GAMESCREEN_H
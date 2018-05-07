#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Pad 
{
public:
	int x_left = 300;
	int x_right = 500;
	void DrawPad(Graphics &gfx, Keyboard &kbd);
	int MovePad( Keyboard &kbd);
	int x = 300;
	int y = 0;
private:
	int speed = 5;
};
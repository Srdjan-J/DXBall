#pragma once
#include "Vec2.h"
#include "Graphics.h"
 #include "Ball.h"
static bool Destroyed = false;
class Rect 
{
	Ball ball;
	Ball ball1;
public:
	bool boolArray[63] = { true, true, true, true, true, true ,true, true, true, true, true, true, true, true, true, true, true, true ,true, true, true, true, true, true, true, true, true, true, true, true ,true, true, true, true, true, true, true, true, true, true, true, true ,true, true, true, true, true, true, true, true, true, true, true, true ,true, true, true, true, true, true, true, true, true };
	bool InvArray[28] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };
	int i = 0;
	int k = 0;
	bool provera = false;
	int x11 = 50;
	int BrickWidth = 50;
	int BrickHeight = 25;
	int y11 = 25;
	int pozicija = 0;
	Rect() = default;
	bool IsDestroyed() const;
	void DrawGrid(Graphics& gfx);
	Vec2 v;
private:
	bool isDestroyed = false;
};
#pragma once
#include "SpriteCodex.h"
#include "Graphics.h"
#include "Pad.h"
#include "Keyboard.h"
static bool brick = false;
class Ball
{
public:
	bool show = true;
	void BallReboundY();
	bool something = true;
	int x_left1 = 300;
	int x_right1 = 500;
	Ball() = default;
	void BallCollision(int &x, int &y, Keyboard &kbd);
	bool Collision = false;
	bool brick1 = false;
	bool PadCollision();
	void BallReboundX();
	bool GameOver = false;
	bool side = true;

	int vx = 1;
	int vy = 1;
	int *vyy = &vy;
	Graphics gfx;
	Pad pad;
	Keyboard kbd;
	int speed = 5;
private:
	bool click = false;
	int x11 = 50;
};
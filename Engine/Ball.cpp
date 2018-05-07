#include "Ball.h"
#include "SpriteCodex.h"
#include "Vec2.h"

void Ball::BallReboundY()
{
	vy = -vy;
}
Vec2 v;
int BrickX[5];
int kk = 50;
int pocetak = 0;
int bla = 1;

void Ball::BallCollision(int &x, int &y, Keyboard &kbd)
{
	Collision = false;
	if (click == false)
	{
		if ((GetKeyState(VK_LBUTTON) & 0x100) != 0)
		{
			click = true;
			if (x < 400)
			{
				vx = -1;
			}
			else if(x > 400)
			{
				vx = 1;
			}
		}
		if (kbd.KeyIsPressed(VK_LEFT))
		{
			if (x <= 100)
			{
				x = x + speed;
			}
			x = x - speed;
		}
		if (kbd.KeyIsPressed(VK_RIGHT))
		{
			if (x >= 700)
			{
				x = x - speed;
			}
			x = x + speed;
		}
	}
	if (click == true)
	{
		for (int i = 0; i < 5; i++)
		{
			x = x + vx;
			y = y - vy;
			if (x == 10)
			{
				BallReboundX();
				Collision = true;
			}
			if (x == 790)
			{
				BallReboundX(); // vx = -vx;
				Collision = true;
			}
		}
		for (int i = 0; i < 5; i++)
		{
			if (y == 590)
			{
				BallReboundY();
				Collision = true;
			}
			if (y == 10)
			{
				BallReboundY();
				Collision = true;
			}
		}
	}
		for (int i = 0; i < 5; i++)
		{
			BrickX[i] = kk*bla;
			++bla;
		}
	
	if (brick == true)
	{
		*vyy = -*vyy;
		brick = false;
		Collision = true;
	}
	
		if (kbd.KeyIsPressed(VK_LEFT))
		{
			if (x_left1 > 0)
			{
				x_left1 -= speed;
				x_right1 -= speed;
			}
		}

		if (kbd.KeyIsPressed(VK_RIGHT))
		{
			if (x_right1 < 800)
			{
				x_right1 += speed;
				x_left1 += speed;
			}
		}

		if (x >= x_left1 && x <= x_right1 && y==525)
		{
			{
				BallReboundY();
				Collision = true;
			}
		}

		if (x == x_left1 && y >= 525 && y <= 550)
		{
			BallReboundX();
			if (kbd.KeyIsPressed(VK_LEFT))
			{
				BallReboundX();
			}
		}

		if (x == x_right1 && y >= 525 && y <= 550)
		{
			BallReboundX();
		}
}

bool Ball::PadCollision()
{
	return 0;
}

void Ball::BallReboundX()
{
	vx = -vx;
}

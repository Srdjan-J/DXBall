#include "Pad.h"

int Pad::MovePad( Keyboard &kbd)
{
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		x -= speed;
		x_left -= 5;
		if (x < 0)
		{
			x = x + 5;
		}
	}

	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		x += speed;
		x_right += 5;
		if (x > 600)
		{
			x = x - 5;
		}
	}
	return x_left;
	 return x_right;
}

void Pad::DrawPad(Graphics &gfx, Keyboard &kbd)
{
	for (int i = 0; i < 200; i++)
	{
		for (int j = 525; j < 550; j++)
		{
				gfx.PutPixel(x + i, y + j, Colors::White);	
		}
	}
}


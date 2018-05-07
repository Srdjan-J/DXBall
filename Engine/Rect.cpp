#include "Rect.h"

bool Rect::IsDestroyed() const
{
	return isDestroyed;
}

int kk1 = 50;
int bla1 = 1;

void Rect::DrawGrid(Graphics& gfx)
{
	int j = 0;
	int var = 50;
	int j1 = 0;
	int var1 = 25;
		for (int y = 0; y < 550; ++y)
		{
			gfx.PutPixel(var, y, Colors::Black);
			if (y == 549 && j < 700)
			{
				j += 50;
			}
			if (j == var)
			{
				var += 50;
				y = 0;
			}
		}
		for (int x = 0; x < 800; ++x)
		{
			gfx.PutPixel(x, var1, Colors::Black);
			if (x == 799 && j1 < 525)
			{
				j1 += 25;
			}
			if (j1 == var1)
			{
				var1 += 25;
				x = 0;
			}
		}
}

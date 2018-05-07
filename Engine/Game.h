#pragma once
#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Ball.h"
#include "SpriteCodex.h"
#include "Vec2.h"
#include "Sound.h"
#include "Rect.h"
#include "Pad.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
	void DrawRect(int &x, int &y, int rect_x, int rect_y, int pocetak_x, int pocetak_y, Color color, int broj, Graphics& gfx);
	void DrawInvRect(int &x, int &y, int rect_x, int rect_y, int pocetak_x, int pocetak_y, Color color, int broj, Graphics& gfx);
	void CreateBricks();
private:
	void ComposeFrame();
	void UpdateModel();
	void DrawGameOver(int x, int y);

	bool grid = true;
	bool gameover = false;
	bool InvBrick[28] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };
	bool confirm[28] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	SpriteCodex Sprite;
	Vec2 v;
	Ball ball;
	Rect rect;
	Sound Soundpad;
	Sound SoundBrick;
	Pad pad;
	Keyboard kbd;
	/********************************/
};
#pragma once
#include <conio.h>
#include "XY.h"
#include "User.h"
#include "DDongMgr.h"

class KGame
{
public:
	KGame();
	~KGame();
	enum{ XSIZE = 30, YSIZE = 40 };
	void Run();
	int Map[YSIZE][XSIZE];
private:
	XY m_XY;
	User m_User;
	DDongMgr m_DDongMgr;
	void DrawMap();
};


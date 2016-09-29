#include "stdafx.h"
#include "XY.h"
#include <windows.h>

XY::XY()
{
}


XY::~XY()
{
}


void XY::gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

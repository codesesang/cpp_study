#include "stdafx.h"
#include "DDong.h"


DDong::DDong()
: DDong_xPos(0)
, DDong_yPos(0)
, Life(0)
{
}


DDong::~DDong()
{
}

void DDong::SetDDong(int x, int y)
{
	DDong_xPos = x;
	DDong_yPos = y;

	m_XY.gotoxy(DDong_xPos, DDong_yPos);

	printf("¡Ü");
}

void DDong::DelDDong(int x, int y)
{
	DDong_xPos = x;
	DDong_yPos = y;

	m_XY.gotoxy(DDong_xPos, DDong_yPos);

	printf("  ");
}

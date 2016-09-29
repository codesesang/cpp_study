#pragma once
#include "XY.h"

class DDong
{
public:
	DDong();
	~DDong();
	int Life;
	void SetDDong(int x, int y);
	int DDong_xPos;
	int DDong_yPos;
private:
	XY m_XY;
public:
	void DelDDong(int x, int y);
};


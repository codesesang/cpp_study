#pragma once
#include "XY.h"
class User
{
public:
	User();
	~User();
private:
	XY m_XY;
public:
	int xPos;
	int yPos;
	void SetUser(int x, int y);
	void MoveUser(int *x,int *y, int xSize, int ySize, char ch);
	void DelUser(int x, int y);
};


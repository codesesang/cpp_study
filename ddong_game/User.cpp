#include "stdafx.h"
#include "User.h"

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

User::User()
: xPos(0)
, yPos(0)
{
}


User::~User()
{
}


void User::SetUser(int x, int y)
{
	xPos = x;
	yPos = y;
	
	m_XY.gotoxy(xPos, yPos);

	printf("¡Ú");
}

void User::DelUser(int x, int y)
{
	xPos = x;
	yPos = y;

	m_XY.gotoxy(xPos, yPos);

	printf("  ");
}


void User::MoveUser(int *x,int *y, int xSize, int ySize, char ch)
{
	xPos = *x;
	yPos = *y;

	switch (ch)
	{
	case UP:
		break;
	case DOWN:
		break;
	case RIGHT:
		if (*x <= (xSize - 3) * 2)
		{
			printf("  ");
			*x += 2;
		}
		break;
	case LEFT:
		if (4 <= *x)
		{
			printf("  ");
			*x -= 2;
		}
		break;
	default:
		break;
	}
}


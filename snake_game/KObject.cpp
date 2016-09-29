#include "stdafx.h"
#include "KObject.h"


KObject::KObject()
	: direction(0)
{
}


KObject::~KObject()
{
}


void KObject::IniSnake()
{
	Position Pos;

	for (int i = 0; i < IniSnakeSize; i++)
	{
		Pos.X = WALLX;
		Pos.Y = WALLY / 2 + i;

		Snake.push_back(Pos);
	}
	direction = UP;
}

void KObject::IniFood()
{
	Position Pos;

	for (int i = 0; i < IniSnakeSize; i++)
	{
		Pos.X = rand() % (2*(WALLX - 2)) + 2;
		Pos.Y = rand() % (WALLY - 2) + 1;

		Food.push_back(Pos);
	}
}

vector<Position> KObject::SnakeHead()
{
	return Snake;
}

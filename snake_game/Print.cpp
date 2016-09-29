#include "stdafx.h"
#include "Print.h"
#include "SetUp.h"
#include <iostream>

using namespace std;

Print::Print()
{
}


Print::~Print()
{
}


void Print::DrawMap()
{
	for (int i = 0; i < WALLY; i++)
	{
		for (int j = 0; j < WALLX; j++)
		{
			if (0 == i || 0 == j || (WALLY - 1) == i || (WALLX - 1) == j)
				cout << "бс";
			else
				cout << "  ";
		}
		cout << endl;
	}
}


void Print::PrintSnake(KObject object)
{
	vector<Position>::iterator iter = object.SnakeHead().begin();
	int size = object.SnakeHead().size();

	//int a=object.SnakeHead().begin()->X;
	//int b=object.SnakeHead().begin()->Y;
	//int c = iter->X;

	for (int i = 0; i < size; i++)
	{
		gotoxy((object.SnakeHead().begin() + i)->X, (object.SnakeHead().begin() + i)->Y, "бу");
	}

}
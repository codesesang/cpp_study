#pragma once
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "SetUp.h"

using namespace std;

class KObject
{
public:
	KObject();
	~KObject();
private:
	int direction;
	vector<Position> Snake;
	vector<Position> Food;
public:
	void IniSnake();
	void IniFood();
	vector<Position> SnakeHead();
};
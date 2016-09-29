#pragma once
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <iostream>

using namespace std;

static const int WALLX = 40;
static const int WALLY = 30;
static const int IniSnakeSize = 5;
static const int IniFoodSize = 1;
static const int GAME_SPEED = 100;

typedef COORD Position;

typedef enum
{
	UP		= 72,                 // 방향키 위
	DOWN	= 80,                 // 방향키 아래
	LEFT	= 75,                 // 방향키 왼쪽
	RIGHT	= 77,                 // 방향키 오른쪽
	ENTER	= 13,                 // 엔터 키
	ESC		= 27                  // ESC 키
} Keyboard;


extern void gotoxy(int x, int y);
extern void gotoxy(int x, int y, string ch);
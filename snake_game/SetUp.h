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
	UP		= 72,                 // ����Ű ��
	DOWN	= 80,                 // ����Ű �Ʒ�
	LEFT	= 75,                 // ����Ű ����
	RIGHT	= 77,                 // ����Ű ������
	ENTER	= 13,                 // ���� Ű
	ESC		= 27                  // ESC Ű
} Keyboard;


extern void gotoxy(int x, int y);
extern void gotoxy(int x, int y, string ch);
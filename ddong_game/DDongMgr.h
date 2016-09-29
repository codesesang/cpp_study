#pragma once
#include "DDong.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "User.h"
class DDongMgr
{
public:
	DDongMgr();
	~DDongMgr();
	enum { DDONG_SIZE = 40, INI_DDONG_SIZE = 10 };
	void IniDDong(int xSize,int ySize);
	int MoveDDong(User m_User, int *count, int xSize, int ySize);
private:
	DDong m_DDong[DDONG_SIZE];
public:
	int CheckDDong();
};
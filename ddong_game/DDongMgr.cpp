#include "stdafx.h"
#include "DDongMgr.h"



DDongMgr::DDongMgr()
{
	srand(time(NULL));
}


DDongMgr::~DDongMgr()
{
}


void DDongMgr::IniDDong(int xSize, int ySize)
{
	for (int i = 0; i < DDONG_SIZE; i++)
	{
		m_DDong[i].DDong_xPos = (rand() % (xSize - 2) + 1) * 2;
		m_DDong[i].DDong_yPos = 1;

		for (int i = 0; i < INI_DDONG_SIZE; i++)
		{
			m_DDong[i].Life = 1;
		}
	}
}


int DDongMgr::MoveDDong(User m_User, int *count, int xSize, int ySize)
{
	for (int i = 0; i < DDONG_SIZE; i++)
	{
		if (1 == m_DDong[i].Life)
		{
			m_DDong[i].DelDDong(m_DDong[i].DDong_xPos, m_DDong[i].DDong_yPos);
			m_DDong[i].DDong_yPos++;
			

			if (m_DDong[i].DDong_yPos == ySize - 1)
			{
				m_DDong[i].Life = 0;
				m_DDong[i].DDong_yPos = 1;
				m_DDong[i].DDong_xPos = (rand() % (xSize - 2) + 1) * 2;
				*count+=1;
			}

			else if (m_DDong[i].DDong_xPos == m_User.xPos && m_DDong[i].DDong_yPos == m_User.yPos)
			{
				return 1;
			}

			m_DDong[i].SetDDong(m_DDong[i].DDong_xPos, m_DDong[i].DDong_yPos);
		}

		else
		{
			if (4 == rand() % 6)
			{
				m_DDong[i].Life = 1;
			}
		}
	}

	return 0;
}


int DDongMgr::CheckDDong()
{
	return 0;
}

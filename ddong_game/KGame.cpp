#include "stdafx.h"
#include "KGame.h"


KGame::KGame()
{
}


KGame::~KGame()
{
}


void KGame::Run()
{
	int x = XSIZE;
	int y = YSIZE - 2;
	int count = 0;

	DrawMap();
	m_User.SetUser(x, y);
	m_DDongMgr.IniDDong(XSIZE, YSIZE);
	
	while (1)
	{
		_sleep(70);

		if (1 == m_DDongMgr.MoveDDong(m_User, &count, XSIZE, YSIZE))
		{
			system("cls");
			printf("ÇÇÇÑ È½¼ö : %d\n", count);
			return;
		}
		
		if (_kbhit())
		{
			char ch = getch();

			if (-32 == ch)
			{
				ch = getch();
			}
			
			m_User.DelUser(x , y);
			m_User.MoveUser(&x, &y, XSIZE, YSIZE, ch);
			m_User.SetUser(x, y);
		}
	}
}


void KGame::DrawMap()
{
	for (int i = 0; i < YSIZE; i++)
	{
		for (int j = 0; j < XSIZE; j++)
			if (0 == i || 0 == j || (YSIZE - 1) == i || (XSIZE - 1) == j)
				Map[i][j] = 1;
	}

	for (int i = 0; i < YSIZE; i++)
	{
		for (int j = 0; j < XSIZE; j++)
		{
			if (1==Map[i][j])
				printf("¡á");
			else
				printf("  ");
		}
		printf("\n");
	}
}

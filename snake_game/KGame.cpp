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
	m_Print.DrawMap();
	//m_KObject.IniFood();
	m_KObject.IniSnake();
	m_Print.PrintSnake(m_KObject);


}
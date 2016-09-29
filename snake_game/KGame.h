#pragma once
#include "Print.h"
#include "KObject.h"
class KGame
{
public:
	KGame();
	~KGame();
	void Run();
private:
	Print m_Print;
	KObject m_KObject;
};
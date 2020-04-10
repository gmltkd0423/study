#include "HumanState.h"

Best* Best::instance;
Hungry* Hungry::instance;
Tired* Tired::instance;
Sleeping* Sleeping::instance;

Best * Best::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Best();
	}
	return instance;
}

Best::Best()
{
	strcpy_s(condition, "좋음");
}

void Best::Swing(Human * human)
{
	cout << " 검을 휘두릅니다!! " << endl;

	SetHumanState(human, Hungry::GetInstance());
	SetCondition(human, Hungry::GetInstance());
}

void Best::Eat(Human * human)
{
	cout << "컨디션이 좋은상태입니다!!" << endl;
}

void Best::Relax(Human * human)
{
	cout << "컨디션이 좋은상태입니다!!" << endl;
}

char * Best::GetCondition()
{
	return condition;
}

Hungry * Hungry::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Hungry();
	}
	return instance;
}

Hungry::Hungry()
{
	strcpy_s(condition, "배고픔");
}

void Hungry::Swing(Human * human)
{
	cout << " 검을 휘두릅니다!! " << endl;

	SetHumanState(human, Tired::GetInstance());
	SetCondition(human, Tired::GetInstance());
}

void Hungry::Eat(Human * human)
{
	cout << "음식을먹어 상태가호전됩니다!!" << endl;

	SetHumanState(human, Best::GetInstance());
	SetCondition(human, Best::GetInstance());
}

void Hungry::Relax(Human * human)
{
	cout << "배가 고픕니다!!" << endl;
}

char * Hungry::GetCondition()
{
	return condition;
}

Tired * Tired::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Tired();
	}
	return instance;
}

Tired::Tired()
{
	strcpy_s(condition, "지침");
}

void Tired::Swing(Human * human)
{
	cout << " 검을 휘두릅니다!! " << endl;

	SetHumanState(human, Sleeping::GetInstance());
	SetCondition(human, Sleeping::GetInstance());
}

void Tired::Eat(Human * human)
{
	cout << "휴식이 필요합니다!!" << endl;
}

void Tired::Relax(Human * human)
{
	cout << "휴식을취해 상태가호전됩니다!!" << endl;

	SetHumanState(human, Hungry::GetInstance());
	SetCondition(human, Hungry::GetInstance());
}

char * Tired::GetCondition()
{
	return condition;
}

Sleeping * Sleeping::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Sleeping();
	}
	return instance;
}

Sleeping::Sleeping()
{
	strcpy_s(condition, "피곤");
}

void Sleeping::Swing(Human * human)
{
	cout << " 검을 휘두릅니다!! " << endl;
	cout << "캐릭터가 너무피곤해서 쓰러집니다..." << endl;
	cout << " GAME OVER..." << endl;
	system("pause");
	exit(0);
}

void Sleeping::Eat(Human * human)
{
	cout << "휴식이 필요합니다!!" << endl;
}

void Sleeping::Relax(Human * human)
{
	cout << "휴식을취해 상태가호전됩니다!!" << endl;

	SetHumanState(human, Tired::GetInstance());
	SetCondition(human, Tired::GetInstance());
}

char * Sleeping::GetCondition()
{
	return condition;
}

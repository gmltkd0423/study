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
	strcpy_s(condition, "����");
}

void Best::Swing(Human * human)
{
	cout << " ���� �ֵθ��ϴ�!! " << endl;

	SetHumanState(human, Hungry::GetInstance());
	SetCondition(human, Hungry::GetInstance());
}

void Best::Eat(Human * human)
{
	cout << "������� ���������Դϴ�!!" << endl;
}

void Best::Relax(Human * human)
{
	cout << "������� ���������Դϴ�!!" << endl;
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
	strcpy_s(condition, "�����");
}

void Hungry::Swing(Human * human)
{
	cout << " ���� �ֵθ��ϴ�!! " << endl;

	SetHumanState(human, Tired::GetInstance());
	SetCondition(human, Tired::GetInstance());
}

void Hungry::Eat(Human * human)
{
	cout << "�������Ծ� ���°�ȣ���˴ϴ�!!" << endl;

	SetHumanState(human, Best::GetInstance());
	SetCondition(human, Best::GetInstance());
}

void Hungry::Relax(Human * human)
{
	cout << "�谡 ���Ŵϴ�!!" << endl;
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
	strcpy_s(condition, "��ħ");
}

void Tired::Swing(Human * human)
{
	cout << " ���� �ֵθ��ϴ�!! " << endl;

	SetHumanState(human, Sleeping::GetInstance());
	SetCondition(human, Sleeping::GetInstance());
}

void Tired::Eat(Human * human)
{
	cout << "�޽��� �ʿ��մϴ�!!" << endl;
}

void Tired::Relax(Human * human)
{
	cout << "�޽������� ���°�ȣ���˴ϴ�!!" << endl;

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
	strcpy_s(condition, "�ǰ�");
}

void Sleeping::Swing(Human * human)
{
	cout << " ���� �ֵθ��ϴ�!! " << endl;
	cout << "ĳ���Ͱ� �ʹ��ǰ��ؼ� �������ϴ�..." << endl;
	cout << " GAME OVER..." << endl;
	system("pause");
	exit(0);
}

void Sleeping::Eat(Human * human)
{
	cout << "�޽��� �ʿ��մϴ�!!" << endl;
}

void Sleeping::Relax(Human * human)
{
	cout << "�޽������� ���°�ȣ���˴ϴ�!!" << endl;

	SetHumanState(human, Tired::GetInstance());
	SetCondition(human, Tired::GetInstance());
}

char * Sleeping::GetCondition()
{
	return condition;
}

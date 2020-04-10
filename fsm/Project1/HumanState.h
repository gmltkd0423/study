#pragma once
#include"Human.h"

//���� ���¿� �ൿ�� �������̽�ȭ
class HumanState
{
private:
	char condition[100];
public:
	virtual void Swing(Human* human) = 0;
	virtual void Relax(Human* human) = 0;
	virtual void Eat(Human* human) = 0;
	virtual char* GetCondition() = 0;

	void SetHumanState(Human* human, HumanState* state) //�������set�Լ�
	{
		human->SetState(state);
	}
	void SetCondition(Human* human, HumanState* state)  //���������set�Լ�
	{
		strcpy(human->GetCondition(), state->GetCondition());
	}
};

//��������
class Best :public HumanState  
{
private:
	static Best* instance;
	char condition[100];
public:
	static Best* GetInstance();
	Best();
	virtual void Swing(Human* human);
	virtual void Eat(Human* human);
	virtual void Relax(Human* human);
	virtual char* GetCondition();
};

//����Ļ���
class Hungry :public HumanState
{
private:
	static Hungry* instance;
	char condition[100];
public:
	static Hungry* GetInstance();
	Hungry();
	virtual void Swing(Human* human);
	virtual void Eat(Human* human);
	virtual void Relax(Human* human);
	virtual char* GetCondition();
};

//��ħ����
class Tired :public HumanState
{
private:
	static Tired* instance;
	char condition[100];
public:
	static Tired* GetInstance();
	Tired();
	virtual void Swing(Human* human);
	virtual void Eat(Human* human);
	virtual void Relax(Human* human);
	virtual char* GetCondition();
};

//�ǰ����
class Sleeping :public HumanState
{
private:
	static Sleeping* instance;
	char condition[100];
public:
	static Sleeping* GetInstance();
	Sleeping();
	virtual void Swing(Human* human);
	virtual void Eat(Human* human);
	virtual void Relax(Human* human);
	virtual char* GetCondition();
};


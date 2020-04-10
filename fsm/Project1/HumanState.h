#pragma once
#include"Human.h"

//현재 상태와 행동을 인터페이스화
class HumanState
{
private:
	char condition[100];
public:
	virtual void Swing(Human* human) = 0;
	virtual void Relax(Human* human) = 0;
	virtual void Eat(Human* human) = 0;
	virtual char* GetCondition() = 0;

	void SetHumanState(Human* human, HumanState* state) //현재상태set함수
	{
		human->SetState(state);
	}
	void SetCondition(Human* human, HumanState* state)  //현재컨디션set함수
	{
		strcpy(human->GetCondition(), state->GetCondition());
	}
};

//좋음상태
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

//배고픔상태
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

//지침상태
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

//피곤상태
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


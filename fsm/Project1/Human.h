#pragma once
#include<iostream>
using namespace std;

class HumanState;
class Human
{
private:
	HumanState* state;
	char condition[100];
public:
	Human();
	void SetState(HumanState* state);
	void Swing();
	void Eat();
	void Relax();
	char* GetCondition();
};

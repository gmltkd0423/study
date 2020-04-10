#include "Human.h"
#include"HumanState.h"

Human::Human()
{
	state = Best::GetInstance();
	strcpy(condition, state->GetCondition());
}

void Human::SetState(HumanState * state)
{
	this->state = state;
}

void Human::Swing()
{
	state->Swing(this);
}

void Human::Eat()
{
	state->Eat(this);
}

void Human::Relax()
{
	state->Relax(this);
}

char * Human::GetCondition()
{
	return condition;
}

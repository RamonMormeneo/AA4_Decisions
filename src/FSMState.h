#pragma once
class Agent;

class FSMState
{
public:
	virtual void Enter(Agent*) = 0;
	virtual void Update(Agent*) = 0;
	virtual void Exit(Agent*) = 0;
};

#ifndef OFF_h
#define OFF_h

#include "State.hpp"

class Machine;

class OFF: public State{
public:
	OFF();
	~OFF();
	virtual void on(Machine* m);
	virtual void off(Machine* m);
};

#endif
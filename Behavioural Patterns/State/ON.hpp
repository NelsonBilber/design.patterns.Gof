#ifndef ON_h
#define ON_h

#include "State.hpp"

class State;
class Machine;

class ON : public State{
public:
	ON();
	~ON();
	virtual void on(Machine* m);
	virtual void off(Machine* m);
};

#endif
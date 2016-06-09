#ifndef State_h
#define State_h

class Machine;

class State{
public:

	virtual void on(Machine * m);

	virtual void off(Machine * m);
};

#endif
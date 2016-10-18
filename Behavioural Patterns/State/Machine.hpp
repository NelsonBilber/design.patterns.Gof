#ifndef Machine_h
#define Machine_h

class State;

class Machine {
public:
	Machine();
	void setCurrent(State *s);
	void on();
	void off();
private:
	State* current;
};


#endif
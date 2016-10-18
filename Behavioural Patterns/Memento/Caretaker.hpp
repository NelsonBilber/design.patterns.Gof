#ifndef Caretaker_h
#define Caretaker_h

#include "Memento.hpp"

class Memento;

class Caretaker
{
public:
	Caretaker();
	void setMemento(Memento m);
	Memento getMemento();
private:
	Memento mm;
};

#endif
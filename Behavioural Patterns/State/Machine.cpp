#include "Machine.hpp"
#include "State.hpp"
#include "OFF.hpp"

#include <iostream>

using namespace std;

Machine::Machine()
{
	current = new OFF();
	cout << endl;
}

void Machine::setCurrent(State *s)
{
	current = s;
}

void Machine::on()
{
	current->on(this);
}

void Machine::off()
{
	current->off(this);
}
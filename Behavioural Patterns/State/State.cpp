#include "State.hpp"
#include <iostream>

using namespace std;

void State::on(Machine * m)
{
	cout << "Already on" << endl;
}

void State::off(Machine * m)
{
	cout << "Already off" << endl;
}
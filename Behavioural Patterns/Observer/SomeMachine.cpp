#include "SomeMachine.hpp"
#include "Observer.hpp"

void SomeMachine::addObserver(Observer* o)
{
	vect.push_back(o);
}

void SomeMachine::removeObserver(Observer* o)
{
	vector<Observer*>::iterator it = find(vect.begin(), vect.end(), o);
	if (it != vect.end())
		vect.erase(it);
}

void SomeMachine::notifyObservers()
{
	vector<Observer*>::iterator it = vect.begin();
	for (it; it != vect.end(); ++it)
	{
		(*it)->finished();
	}
}

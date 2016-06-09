#ifndef SomeMachine_h
#define SomeMachine_h

#include <vector>

using namespace std;

class Observer;

class SomeMachine{
public:
	void addObserver(Observer* o);
	void removeObserver(Observer* o);
	void notifyObservers();
private:
	vector<Observer*> vect;
};

#endif
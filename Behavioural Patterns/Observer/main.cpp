#include <iostream>
#include <string>

#include "SomeMachine.hpp"
#include "Observer.hpp"
#include "View.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
	SomeMachine coffeeMachine;
	View view1;
	View view2;

	coffeeMachine.addObserver(&view1);
	coffeeMachine.addObserver(&view2);

	coffeeMachine.notifyObservers();

	return 0;
}
#ifndef Facade_h
#define Facede_h

#include <iostream>

#include "SubSystem01.hpp"
#include "SubSystem02.hpp"

class Facade {
public:
	Facade()
	{
		sb1 = new SubSystem01();
		sb2 = new SubSystem02();
	}

	void startAllSameTime()
	{
		sb1->startSystem();
		sb2->startSystem();
	}

private:
	SubSystem01* sb1;
	SubSystem02* sb2;
};

#endif 

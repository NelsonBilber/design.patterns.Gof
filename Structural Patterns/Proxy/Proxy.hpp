#ifndef Proxy_h
#define Proxy_h

#include "ICar.hpp"
#include "Car.hpp"
#include <iostream>

using namespace std;

class Proxy
{
public:
	Proxy(){
		impl = new Car();
	}

	void go() { 
		impl->drive(); 
		cout <<" drive by proxy ... "<< endl;
	}

private:
	ICar* impl;
};

#endif 

#ifndef Student_h
#define Student_h

#include <iostream>
#include "Person.hpp"

class Student: public Person {
public:
	virtual int getAge(){
		return 30; // fake model
	}
};

#endif 

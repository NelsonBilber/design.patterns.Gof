#ifndef StudentFactory_h
#define StudentFactory_h

#include <iostream>
#include <vector>
#include "Student.hpp"
#include "Person.hpp"

using namespace std;

class StudentFactory{
public:
	void generate() {
		for (int i = 0; i < 10; i++) {
			Person* p = new Student();
			vv.push_back(p);
		}
	}

	inline size_t numElems() { return vv.size(); }

private:
	vector<Person *> vv;
};

#endif 

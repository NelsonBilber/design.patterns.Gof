#ifndef TemplateMethod_h
#define TemplateMethod_h

#include <string>

using namespace std;

class TemplateMethod{
public:
	virtual string Algorithm() = 0;
	virtual void step1() = 0;
	virtual void step2() = 0;

	virtual void execute(){
		step1();
		step2();
	}
};

#endif
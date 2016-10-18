#ifndef AlgorithmBubbleSort_h
#define AlgorithmBubbleSort_h

#include "TemplateMethod.hpp"
#include <string>

using namespace std;

class AlgorithmBubbleSort : public TemplateMethod{
public:
	virtual string Algorithm() override;
	virtual void step1() override;
	virtual void step2() override;
};


#endif
#ifndef AlgorithmQuickSort_h
#define AlgorithmQuickSort_h

#include "TemplateMethod.hpp"
#include <string>

using namespace std;

class AlgorithmQuickSort : public TemplateMethod{
public:
	virtual string Algorithm() override;
	virtual void step1() override;
	virtual void step2() override;
};

#endif
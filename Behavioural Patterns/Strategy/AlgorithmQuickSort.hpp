#ifndef AlgorithmQuickSort_h
#define AlgorithmQuickSort_h

#include "Strategy.hpp"
#include <string>

using namespace std;

class AlgorithmQuickSort: public Strategy{
public:
	virtual string Algorithm() override;
};


#endif
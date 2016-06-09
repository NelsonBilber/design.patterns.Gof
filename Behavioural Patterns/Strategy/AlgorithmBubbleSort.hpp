#ifndef AlgorithmBubbleSort_h
#define AlgorithmBubbleSort_h

#include "Strategy.hpp"
#include <string>

using namespace std;

class AlgorithmBubbleSort: public Strategy{
public:
	virtual string Algorithm() override;
};


#endif
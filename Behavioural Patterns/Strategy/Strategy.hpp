#ifndef Strategy_h
#define Strategy_h

#include <string>

using namespace std;

class Strategy{
public:
	virtual string Algorithm() = 0;
};

#endif
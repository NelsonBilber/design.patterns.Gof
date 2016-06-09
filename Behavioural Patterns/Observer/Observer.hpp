#ifndef Observer_h
#define Observer_h

#include <string>

using namespace std;

class Observer {
public:
	virtual void finished() = 0;
};

#endif
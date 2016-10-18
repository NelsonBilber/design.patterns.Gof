#ifndef Client_h
#define Client_h

#include "Strategy.hpp"
#include <string>

using namespace std;

class Client {
public:
	string callAlgorithm(){
		return _strategy->Algorithm();
	}

	void setAlgororithStrategy(Strategy* strategy){
		_strategy = strategy;
	}
private:
	Strategy* _strategy;
};

#endif
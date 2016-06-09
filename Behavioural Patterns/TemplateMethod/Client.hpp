#ifndef Client_h
#define Client_h

#include "TemplateMethod.hpp"
#include <string>

using namespace std;

class Client {
public:
	string callAlgorithm(){
		return _template->Algorithm();
	}

	void setAlgororithStrategy(TemplateMethod* temp){
		_template = temp;
	}

	void executeByStep() {
		_template->execute();
	}

private:
	TemplateMethod* _template;
};

#endif
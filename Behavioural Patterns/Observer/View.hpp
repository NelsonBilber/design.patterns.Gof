#ifndef View_h
#define View_h

#include "Observer.hpp"

class View: public Observer {
public:
	View();
	virtual void finished();
};


#endif
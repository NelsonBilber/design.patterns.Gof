#ifndef FACTORY_HEADER
#define FACTORY_HEADER

#include "Widget.h"

class Factory{
public:
	virtual Widget* CreateWindow() = 0;
};

#endif
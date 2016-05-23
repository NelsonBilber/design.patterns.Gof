#include "Widget.h"

class Factory{
public:
	virtual Widget* CreateWindow() = 0;
};
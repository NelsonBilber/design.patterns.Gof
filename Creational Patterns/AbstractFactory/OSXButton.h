#include "Widget.h"
#include <iostream>

using namespace std;

class OSXButton : public Widget{
public:
	virtual void draw() { cout <<" Create OSX window button ... "<< endl; }
};
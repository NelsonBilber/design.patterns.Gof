#include "Widget.h"
#include <iostream>

using namespace std;

class WindowsButton : public Widget{
public:
	virtual void draw() { cout << " Create Windows OS window button ... " << endl; }
};
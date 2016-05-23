#include "Factory.h"

class ButtonFactory : public Factory{
public:
	ButtonFactory(bool isWindows);
	virtual Widget* CreateWindow();

private:
	bool _isWindows;
};
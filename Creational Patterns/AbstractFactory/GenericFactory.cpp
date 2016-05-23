#include "GenericFactory.h"
#include "OSXButton.h"
#include "WindowsButton.h"


ButtonFactory::ButtonFactory(bool isWindows) :
			_isWindows(isWindows)
{}

Widget* ButtonFactory::CreateWindow()
{
	if (_isWindows){
		return new WindowsButton();
	}
	else {
		return new OSXButton();
	}
}
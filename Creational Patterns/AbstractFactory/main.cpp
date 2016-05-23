#include <iostream>
#include "Widget.h"
#include "ButtonFactory.h"

int main(int argc, const char * argv[])
{
	ButtonFactory* TheCreatorWin = new  ButtonFactory(true);
	TheCreatorWin->CreateWindow()->draw();

	ButtonFactory* TheCreatorOSX = new  ButtonFactory(false);
	TheCreatorOSX->CreateWindow()->draw();

	delete TheCreatorWin;
	delete TheCreatorOSX;
	
    return 0;
}




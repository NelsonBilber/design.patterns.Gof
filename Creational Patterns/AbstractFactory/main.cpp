#include <iostream>
#include "Widget.h"
#include "Factory.h"
#include "ButtonFactory.h"

int main(int argc, const char * argv[])
{
	Factory* TheCreatorWin = new  ButtonFactory(true);
	TheCreatorWin->CreateWindow()->draw();

	Factory* TheCreatorOSX = new  ButtonFactory(false);
	TheCreatorOSX->CreateWindow()->draw();

	delete TheCreatorWin;
	delete TheCreatorOSX;
	
    return 0;
}




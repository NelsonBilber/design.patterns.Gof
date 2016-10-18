#include <iostream>
#include <string>

#include "FileSelectionDialog.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
	FileSelectionDialog dialog;
	
	dialog.handleEvent(0);
	dialog.handleEvent(1);
	
	return 0;
}

/*
NOTE
This samples was based on example provided by
https://sourcemaking.com/design_patterns/mediator/cpp/1
*/

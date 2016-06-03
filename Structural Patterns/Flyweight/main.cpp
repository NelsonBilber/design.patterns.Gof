#include <iostream>
#include "StudentsFactory.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
	StudentFactory ff;
	ff.generate();

	cout << ff.numElems() << endl;

    return 0;
}




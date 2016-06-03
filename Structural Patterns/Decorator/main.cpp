#include <iostream>
#include "Circle.hpp"
#include "Shapes.hpp"
#include "ColorShape.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
	Circle ci;
	string bb{ "black" };
	ColorShape cs{ bb, ci};

	cout << cs.str() << endl;

    return 0;
}




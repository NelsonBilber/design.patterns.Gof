#include <iostream>
#include "Machine.hpp"
#include "State.hpp"
#include "ON.hpp"
#include "OFF.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
	Machine mm;
	ON* on = new ON();
	OFF* off = new OFF();

	mm.setCurrent(on);
	mm.setCurrent(off);

	return 0;
}
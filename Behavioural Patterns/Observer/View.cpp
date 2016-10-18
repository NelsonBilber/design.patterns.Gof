#include "View.hpp"
#include <iostream>

View::View():Observer(){
}

void View::finished(){
	std::cout << "Orders are ready to be served " << std::endl;
}
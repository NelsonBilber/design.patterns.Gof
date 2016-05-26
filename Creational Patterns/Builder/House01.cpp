#include "House01.hpp"

House01::House01()
{
    house = new House();
}

void House01::buildWindow()
{
    house->setWindow(33);
}

void House01::buildFloor()
{
    house->setFloor("xpto");
}
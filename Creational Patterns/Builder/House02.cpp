#include "House02.hpp"

House02::House02()
{
    house = new House();
}

void House02::buildWindow()
{
    house->setWindow(38);
}

void House02::buildFloor()
{
    house->setFloor("xxzp");
}
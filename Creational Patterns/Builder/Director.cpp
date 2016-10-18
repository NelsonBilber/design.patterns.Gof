#include "Director.hpp"

Director::Director(HouseBuilder* HouseBuilder):
                    _houseBuilder(HouseBuilder)
{}

void Director::buildHouse()
{
    _houseBuilder->buildWindow();
    _houseBuilder->buildFloor();
}
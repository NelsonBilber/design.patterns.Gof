
#ifndef HouseBuilder_h
#define HouseBuilder_h

#include "House.hpp"

class HouseBuilder{
public:
    virtual void buildWindow() = 0;
    virtual void buildFloor() = 0;
    virtual House* getHouse() = 0;
};

#endif /* HouseBuilder_h */

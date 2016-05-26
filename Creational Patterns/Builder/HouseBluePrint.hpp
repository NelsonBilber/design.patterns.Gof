#ifndef HouseBluePrint_h
#define HouseBluePrint_h

#include <iostream>
#include <string>

using namespace std;

class HouseBluePrint{
public:
    virtual void setWindow(int i) = 0;
    virtual void setFloor(string name) = 0;
};

#endif /* HouseBluePrint_h */

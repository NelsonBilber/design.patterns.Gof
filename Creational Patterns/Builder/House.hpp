#ifndef House_hpp
#define House_hpp

#include <iostream>
#include <string>
#include "HouseBluePrint.hpp"

using namespace std;

class House: public HouseBluePrint{
    int _nr;
    string _name;
public:
    void setWindow(int nr);
    void setFloor(string name);
};

#endif /* House_hpp */

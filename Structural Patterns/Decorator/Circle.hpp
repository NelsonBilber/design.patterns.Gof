#ifndef Circle_h
#define Circle_h

#include "Shapes.hpp"
#include <iostream>
#include <sstream>
#include <string>

class Circle: public Shapes{
public:
    string str() override
    {
        return  "A circle of radius ... 3.14 ";
    }
};

#endif /* Circle_h */

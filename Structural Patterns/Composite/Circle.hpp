#ifndef Circle_h
#define Circle_h

#include "Shapes.hpp"
#include <iostream>

class Circle: public Shapes{
public:
    void draw()
    {
        std::cout << "Draw Circle ... " << std::endl;
    }
};

#endif /* Circle_h */

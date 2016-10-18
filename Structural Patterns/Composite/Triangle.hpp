#ifndef Triangle_h
#define Triangle_h

#include "Shapes.hpp"
#include <iostream>

class Triangle: public Shapes{
public:
    void draw()
    {
        std::cout << "Draw Triangle ... " << std::endl;
    }
};

#endif /* Triangle_h */

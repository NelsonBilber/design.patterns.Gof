#ifndef Composite_h
#define Composite_h

#include <vector>
#include <algorithm>
#include <functional>
#include "Shapes.hpp"

class Composite: public Shapes{
public:
    void draw()
    {
        for_each(lst.begin(), lst.end(), std::mem_fun(&Shapes::draw));
    }
    
    void insert(Shapes* shape)
    {
        lst.push_back(shape);
    }
    
private:
    std::vector<Shapes*> lst;
};

#endif /* Composite_h */

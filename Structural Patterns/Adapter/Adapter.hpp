#ifndef Adapter_hpp
#define Adapter_hpp

#include "Triangle.hpp"
#include "BaseTriangle.hpp"
#include <iostream>

using namespace std;

class Adapter: public Triangle, public BaseTriangle
{
public:
    virtual void render()
    {
        cout << "Render for adapter .... " << endl;
        BaseWayToRender();
    }
};


#endif

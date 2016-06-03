#ifndef HandlerB_hpp
#define HandlerB_hpp

#include <iostream>
#include "Base.hpp"
#include "HandlerB.hpp"

using namespace std;

class HandlerB: public Base
{
public:
    virtual void handle(int i)
    {
        if(i <= 2 )
            cout << "handle by process 02" << endl;
        else
            Base::handle(i);
    }
};

#endif

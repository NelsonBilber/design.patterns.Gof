#ifndef HandlerA_hpp
#define HandlerA_hpp

#include <iostream>
#include "Base.hpp"
#include "HandlerA.hpp"

using namespace std;

class HandlerA: public Base
{
public:
    virtual void handle(int i)
    {
        if(i < 2 )
            cout << "handle by process 01" << endl;
        else
            Base::handle(i);
    }
};

#endif

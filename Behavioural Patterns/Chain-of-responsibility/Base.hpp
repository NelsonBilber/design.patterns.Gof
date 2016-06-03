#ifndef Base_hpp
#define Base_hpp

#include <iostream>

using namespace std;

class Base
{
private:
    Base *next;
public:
    
    void next_record(Base* n)
    {
        next = n;
    }
    
    void add (Base* b)
    {
        if(next)
            next->add(b);
        else
            next = b;
    }
    
    virtual void handle(int i)
    {
        next->handle(i);
    }
};

#endif

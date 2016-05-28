#ifndef ConcreteProduct2_hpp
#define ConcreteProduct2_hpp

#include "ProductBase.hpp"
#include <iostream>

using namespace std;

class ConcreteProduct2 : public ProductBase
{
public:
    ConcreteProduct2()
    {
        cout << "ConcreteProduct2" <<endl;
    }
};

#endif

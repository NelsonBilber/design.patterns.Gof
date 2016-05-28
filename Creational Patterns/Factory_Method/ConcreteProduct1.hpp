#ifndef ConcreteProduct1_hpp
#define ConcreteProduct1_hpp

#include "ProductBase.hpp"
#include <iostream>

using namespace std;

class ConcreteProduct1 : public ProductBase
{
public:
    ConcreteProduct1()
    {
        cout << "ConcreteProduct1" <<endl;
    }
};

#endif

#include <iostream>
#include "ConcreteFactory.hpp"
#include "ProductBase.hpp"

using namespace std;


int main(int argc, const char * argv[])
{
   
    ConcreteFactory factory;
    
    ProductBase* p1 = factory.FactoryMethod(1);
    ProductBase* p2 = factory.FactoryMethod(2);
    
    return 0;
}




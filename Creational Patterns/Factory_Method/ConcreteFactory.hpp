#ifndef ConcreteFactory_hpp
#define ConcreteFactory_hpp

#include "ProductBase.hpp"
#include "FactoryBase.hpp"
#include "ConcreteProduct1.hpp"
#include "ConcreteProduct2.hpp"


class ConcreteFactory: public FactoryBase
{
public:
    ProductBase* FactoryMethod(int type){
        switch (type) {
            case 1:
                return new ConcreteProduct1();
                break;
            case 2:
                return new ConcreteProduct2();
                break;
            default:
                return nullptr;
                break;
        }
    }
};


#endif 

#ifndef FactoryBase_hpp
#define FactoryBase_hpp

#include "ProductBase.hpp"

class FactoryBase
{
public:
    ProductBase* FactoryMethod(int type);
};

#endif

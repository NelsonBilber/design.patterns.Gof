#include "GenericObject.hpp"

#include <iostream>
#include <memory>

using namespace std;

class GenericObject::impl
{
public:
    void setup_values(int a, int b)
    {
        _a = a;
        _b = b;
    }
    
    inline int getA()
    {
        return _a;
    }
    
private:
    int _a= 0;
    int _b= 0;
};

GenericObject::GenericObject(): pimpl(new impl())
{
    pimpl->setup_values(3,5);
}

int GenericObject::getA()
{
    return pimpl->getA();
}

GenericObject::~GenericObject() = default;
GenericObject::GenericObject(GenericObject&&) = default;
GenericObject& GenericObject::operator=(GenericObject&&) = default;
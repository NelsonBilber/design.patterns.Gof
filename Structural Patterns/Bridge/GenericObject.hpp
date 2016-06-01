#ifndef GenericObject_hpp
#define GenericObject_hpp

#include <memory>

using namespace std;

class GenericObject
{
public:
    GenericObject();
    ~GenericObject();
    
    GenericObject(GenericObject&&);
    GenericObject& operator=(GenericObject&&);
    
    int getA();
    
private:
    class impl;
    std::unique_ptr<impl> pimpl;
};

#endif /* GenericObject_hpp */

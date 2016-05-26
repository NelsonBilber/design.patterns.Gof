#ifndef House02_hpp
#define House02_hpp

#include <string>
#include "HouseBuilder.hpp"
#include "House.hpp"

using namespace std;

class House02: public HouseBuilder{
private:
    House *house;
public:
    House02();
    void buildWindow();
    void buildFloor();
    inline House* getHouse() { return this->house;}
    
};

#endif /* House02_hpp */

#ifndef House01_hpp
#define House01_hpp

#include <string>
#include "HouseBuilder.hpp"
#include "House.hpp"

using namespace std;

class House01: public HouseBuilder{
private:
    House *house;
public:
    House01();
    void buildWindow();
    void buildFloor();
    inline House* getHouse() { return this->house;}
};


#endif /* House01_hpp */

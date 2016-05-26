#ifndef Director_hpp
#define Director_hpp

#include "House.hpp"
#include "HouseBuilder.hpp"

class Director
{
private:
    HouseBuilder * _houseBuilder;
public:
    Director(HouseBuilder* HouseBuilder);
    void buildHouse();
    inline House* getHouse() { return _houseBuilder->getHouse();}
};


#endif /* Director_hpp */

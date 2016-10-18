
/*
 
 Director: construct interface using builder interface
 Builder: abstract interface to build parts os a product
 Conccrete classes: implements builder interface
 Product: complex object
 
 */

#include <iostream>
#include "House.hpp"
#include "HouseBuilder.hpp"
#include "Director.hpp"
#include "House01.hpp"
#include "House02.hpp"

using namespace std;


int main(int argc, const char * argv[])
{
    HouseBuilder *hb1 = new House01();
    HouseBuilder *hb2 = new House02();
    
    Director* director1 = new Director(hb1);
    director1->buildHouse();
    
    Director* director2 = new Director(hb2);
    director2->buildHouse();
    
    House *house1 = director1->getHouse();
    cout << "c1 " << house1 << endl;
    
    House *house2 = director2->getHouse();
    cout << "c2 " << house2 << endl;
    
    return 0;
}




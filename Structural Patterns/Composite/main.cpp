#include <iostream>
#include "Shapes.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"
#include "Composite.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
  
    Triangle* t = new Triangle();
    Circle* cc = new Circle();
    
    Composite c;
    c.insert(t);
    c.insert(cc);
    c.draw();
    
    return 0;
}




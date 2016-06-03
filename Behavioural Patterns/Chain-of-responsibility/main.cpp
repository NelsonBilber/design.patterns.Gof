#include <iostream>
#include "HandlerA.hpp"
#include "HandlerB.hpp"

using namespace std;


int main(int argc, const char * argv[])
{
    HandlerA root;
    HandlerB b1;
    HandlerB b2;
    HandlerA a1;
    
    root.add(&b1);
    root.add(&b2);
    root.add(&a1);
    
    for( int i = 0 ; i < 3; i ++){
        root.handle(i);
        cout << endl;
    }
}




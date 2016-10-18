#include <iostream>
#include "Singleton.hpp"

using namespace std;


//TODO
//
// Implement a thread-safe version


int main(int argc, const char * argv[])
{
    Singleton *s1 = nullptr;
    Singleton *s2 = nullptr;
    
    s1 = Singleton::getInstance();
    s1->doSomething();
    
    s2 = Singleton::getInstance();
    s2->doSomething();
    
    return 0;
}




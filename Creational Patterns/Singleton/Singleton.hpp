#ifndef Singleton_hpp
#define Singleton_hpp

#include <iostream>

using namespace std;

class Singleton
{
private:
    static Singleton* _instance;
    Singleton(){}
    
public:
    static Singleton* getInstance() {
        if(_instance == nullptr){
            _instance = new Singleton();
        }
        return _instance;
    }
    
    void doSomething() {
        cout << " I'm working ..." << endl;
    }
    
};

Singleton* Singleton::_instance = nullptr;


#endif

#ifndef Memento_h
#define Memento_h

#include <string>

using namespace std;

class Memento
{
public:
	Memento();
	Memento(string name);
	string getName();
private:
	string _name;
};

#endif
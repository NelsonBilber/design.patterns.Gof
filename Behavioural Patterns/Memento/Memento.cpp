#include "Memento.hpp"


Memento::Memento()
{}

Memento::Memento(string name) 
{
	_name = name; 
}

string Memento::getName() 
{ 
	return _name; 
}

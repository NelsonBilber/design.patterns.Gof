#include "Caretaker.hpp"

Caretaker::Caretaker()
{}

void Caretaker::setMemento(Memento m) 
{
	mm = m; 
}

Memento Caretaker::getMemento() 
{
	return mm; 
}
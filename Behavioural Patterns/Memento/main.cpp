#include <iostream>
#include <string>

#include "Caretaker.hpp"
#include "Memento.hpp"
#include "Book.hpp"

class Caretaker;

using namespace std;

int main(int argc, const char * argv[])
{
	Book book("Lord of rings");
	Memento mm(book.getName());
	
	Caretaker history;
	history.setMemento(mm);

	cout << "old name -> "<< book.getName() << endl;

	//change book name
	book.setName("Art of war");

	cout << "new name -> " << book.getName() << endl;

	//restore name
	book.setName(history.getMemento().getName());

	cout << "revert name -> " << book.getName() << endl;

	return 0;
}
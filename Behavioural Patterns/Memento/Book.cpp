#include "Book.hpp"

Book::Book(string name){ 
	setName(name);
}

string Book::getName(){
	return _name;
}

void Book::setName(string name){
	_name = name;
}
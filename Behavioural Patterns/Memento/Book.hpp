#ifndef Book_h
#define Book_h

#include <string>

using namespace std;

class Book{
public:
	Book(string name);
	string getName();
	void setName(string name);
private:
	string _name;
};


#endif
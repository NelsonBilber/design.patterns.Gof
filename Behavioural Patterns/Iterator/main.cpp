#include <iostream>
#include <string>

#include "IteratorBase.hpp"
#include "ConcreteAggregator.hpp"


using namespace std;

int main(int argc, const char * argv[])
{
	ConcreteAggregator ca;
    string s1("1");
    string s2("2");
	ca.add(s1);
	ca.add(s2);

  IteratorBase* iterator = ca.CreateIterator();
  cout << (string)iterator->First() << endl;

  while(!iterator->IsDone()){
    cout << (string)iterator->Next() << endl;
  }


  return 0;
}

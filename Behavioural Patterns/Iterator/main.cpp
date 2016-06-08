#include <iostream>
#include <string>

#include "ConcreteAggregator.hpp"
#include "IteratorBase.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
	ConcreteAggregator ca;
	ca.add(string("uno"));
	ca.add(string("dooos"));

  IteratorBase* iterator = ca.CreateIterator();
  cout << (string)iterator->First() << endl;

  while(!iterator->IsDone()){
    cout << (string)iterator->Next() << endl;
  }


  return 0;
}

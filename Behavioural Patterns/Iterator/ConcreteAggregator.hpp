#ifndef ConcreteAggregator_hpp
#define ConcreteAggregator_hpp

#include "AggregatorBase.hpp"
#include "ConcreteIterator.hpp"
#include "ConcreteIterator.hpp"

#include <vector>
#include <string>
#include <memory>

class IteratorBase;
class ConcreteIterator;

using namespace std;

class ConcreteAggregator: public AggregatorBase
{
private:
  std::vector<string> arraystrings;
  ConcreteIterator* iterator;
public:

	ConcreteAggregator(){
		iterator = new ConcreteIterator();
	}
	
	virtual IteratorBase* CreateIterator()
	{
		return iterator;
	}

  string GetItem(int index){
    return arraystrings[index];
  }

  inline int Count(){
    return arraystrings.size();
  }

  void add(string item){
    arraystrings.push_back(item);
  }

};

#endif

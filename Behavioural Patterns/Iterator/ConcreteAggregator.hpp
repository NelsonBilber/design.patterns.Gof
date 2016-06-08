#ifndef ConcreteAggregator_hpp
#define ConcreteAggregator_hpp


#include "IteratorBase.hpp"
#include "ConcreteIterator.hpp"
#include "AggregatorBase.hpp"

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

    ConcreteAggregator();
    
    virtual IteratorBase* CreateIterator();
    
    string GetItem(int index);
    
    int Count();
    
    void add(string item);
};

#endif

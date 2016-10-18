#ifndef ConcreteIterator_hpp
#define ConcreteIterator_hpp

#include "IteratorBase.hpp"
#include "ConcreteAggregator.hpp"

class ConcreteAggregator;

class ConcreteIterator: public IteratorBase
{
private:
	ConcreteAggregator * a;
	int _position;

public:
    ConcreteIterator();

    ConcreteIterator(ConcreteAggregator* c);
    
    virtual string First();

    virtual string Next();
    
    virtual string CurrentItem();
    
    virtual bool IsDone();

};

#endif

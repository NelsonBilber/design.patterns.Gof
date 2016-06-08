#ifndef ConcreteIterator_hpp
#define ConcreteIterator_hpp

#include "IteratorBase.hpp"

class ConcreteAggregator;

class ConcreteIterator: public IteratorBase
{
private:
	ConcreteAggregator * a;
	int _position;

public:
	ConcreteIterator(){}

    ConcreteIterator(ConcreteAggregator* c){
        a = c;
        _position = 0;
     }

     virtual string First()
     {
        _position = 0;
        return CurrentItem();
     }


     virtual string Next()
     {
       _position++;
       return CurrentItem();
     }

     virtual string CurrentItem()
     {
       if(_position < a->Count())
			return a->GetItem(_position);
       else
			return nullptr;
     }

     virtual bool IsDone()
     {
       return _position >= a->Count();
     }


};

#endif


#include "IteratorBase.hpp"
#include "ConcreteAggregator.hpp"



ConcreteIterator::ConcreteIterator()
{}

ConcreteIterator::ConcreteIterator(ConcreteAggregator* c)
{
    a = c;
    _position = 0;
}

string ConcreteIterator::First()
{
    _position = 0;
    return CurrentItem();
}

string ConcreteIterator::Next()
{
    _position++;
    return CurrentItem();
}

string ConcreteIterator::CurrentItem()
{
    string res ="";
    if(_position < a->Count())
        res = a->GetItem(_position);
    
    return res;
}

bool ConcreteIterator::IsDone()
{
    return _position > a->Count();
}



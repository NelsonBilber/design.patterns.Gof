#include "IteratorBase.hpp"
#include "ConcreteIterator.hpp"
#include "AggregatorBase.hpp"


ConcreteAggregator::ConcreteAggregator(){
  
}
	
IteratorBase* ConcreteAggregator::CreateIterator()
{
    iterator = new ConcreteIterator(this);
    return iterator;
}

string ConcreteAggregator::GetItem(int index){
    return arraystrings[index];
}

int ConcreteAggregator::Count(){
    return arraystrings.size();
}

void ConcreteAggregator::add(string item){
    arraystrings.push_back(item);
}





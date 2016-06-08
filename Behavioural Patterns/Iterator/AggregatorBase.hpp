#ifndef AggregatorBase_hpp
#define AggregatorBase_hpp

#include "IteratorBase.hpp"

class AggregatorBase
{
public:
  virtual IteratorBase* CreateIterator() = 0;
};

#endif

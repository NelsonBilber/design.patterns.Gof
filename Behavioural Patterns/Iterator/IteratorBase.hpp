#ifndef IteratorBase_hpp
#define IteratorBase_hpp

#include <iostream>
#include <string>

using namespace std;

class IteratorBase
{
public:
  virtual string First() = 0;
  virtual string Next() = 0;
  virtual string CurrentItem() = 0;
  virtual bool IsDone() = 0;
};

#endif

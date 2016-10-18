#ifndef ICommand_hpp
#define ICommand_hpp

#include <iostream>

using namespace std;

class ICommand
{
public:
  virtual ~ICommand(){}
  virtual void execute() = 0;
};

#endif

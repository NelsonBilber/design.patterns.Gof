#ifndef OpenWindow_hpp
#define OpenWindow_hpp

#include "ICommand.hpp"
#include <iostream>

using namespace std;

class OpenWindow: public ICommand
{
public:
  virtual void execute() {
    cout << "Do something to open a window ..." << endl;
  }
};

#endif

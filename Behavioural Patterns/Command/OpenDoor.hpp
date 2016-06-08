#ifndef OpenDoor_hpp
#define OpenDoor_hpp

#include "ICommand.hpp"
#include <iostream>

using namespace std;

class OpenDoor: public ICommand
{
public:
  virtual void execute() {
    cout << "Do something to open a door ..." << endl;
  }
};

#endif

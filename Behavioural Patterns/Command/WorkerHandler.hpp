#ifndef WorkerHandler_hpp
#define WorkerHandler_hpp

#include "ICommand.hpp"
#include "OpenDoor.hpp"
#include "OpenWindow.hpp"
#include <iostream>

using namespace std;

class  WorkerHandler
{
public:

  WorkerHandler(){
    idoor = new OpenDoor();
    iwindow = new OpenWindow();
  }

  void GenerateHandlers(){
    idoor->execute();
    iwindow->execute();
  }

private:
  ICommand* idoor;
  ICommand* iwindow;
};

#endif

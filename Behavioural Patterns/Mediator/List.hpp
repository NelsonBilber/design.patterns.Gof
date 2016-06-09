#ifndef List_hpp
#define List_hpp

#include "Widget.hpp"

class FileSelectionDialog;

class List: public Widget{
public:
  List(FileSelectionDialog *dir, string name):Widget(dir, name){}

  void queryWidget() {
    cout << _name << " list queried"  << endl;
  }

  void updateWidget() {
    cout << _name << " list update"  << endl;
  }
};

#endif

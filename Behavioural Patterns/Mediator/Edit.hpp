#ifndef Edit_hpp
#define Edit_hpp

#include "Widget.hpp"

class FileSelectionDialog;

class Edit: public Widget{
public:
  Edit(FileSelectionDialog *dir, string name):Widget(dir, name){}

  void queryWidget() {
    cout << _name << " list edit"  << endl;
  }

  void updateWidget() {
    cout << _name << " list edit"  << endl;
  }
};

#endif

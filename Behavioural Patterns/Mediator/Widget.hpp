#ifndef Widget_hpp
#define Widget_hpp

#include <iostream>
#include <string>

using namespace std;

class FileSelectionDialog;

class Widget{
public:
    Widget(FileSelectionDialog *mediator, string name);
	virtual void changed(Widget* w);
    virtual void updateWidget() = 0;
    virtual void queryWidget() = 0;
protected:
    string _name;
private:
  FileSelectionDialog* _mediator;
};

#endif

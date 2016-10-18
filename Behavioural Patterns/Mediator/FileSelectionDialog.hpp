#ifndef FileSelectionDialog_hpp
#define FileSelectionDialog_hpp

#include "Edit.hpp"
#include "List.hpp"

class FileSelectionDialog{
public:
	enum{ DirList, DirEdit };

	FileSelectionDialog();
	virtual ~FileSelectionDialog();
	void handleEvent(int i);
	void widgetChanged(Widget* theChanged);

private:
	Widget* _items[2];
};

#endif

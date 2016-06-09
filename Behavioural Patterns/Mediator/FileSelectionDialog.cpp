#include "FileSelectionDialog.hpp"

FileSelectionDialog::FileSelectionDialog()
{
	_items[DirList] = new List(this, "List");
	_items[DirEdit] = new Edit(this, "Edit");
}

FileSelectionDialog::~FileSelectionDialog()
{}

void FileSelectionDialog::handleEvent(int i)
{
	_items[i]->changed(_items[i]);
}

void FileSelectionDialog::widgetChanged(Widget* theChanged)
{
	if(theChanged == _items[DirList])
	{
		_items[DirList]->queryWidget();
		_items[DirList]->updateWidget();
	}
	else if(theChanged == _items[DirEdit]){
		_items[DirEdit]->queryWidget();
		_items[DirEdit]->updateWidget();
	}
}

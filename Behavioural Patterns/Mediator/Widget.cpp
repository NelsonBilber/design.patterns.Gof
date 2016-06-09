#include "Widget.hpp"

Widget::Widget(FileSelectionDialog *mediator, string name): _mediator(mediator),
_name(name)
{}


void Widget::changed(Widget* w)
{
	w->queryWidget();
	w->updateWidget();
}

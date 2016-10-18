#ifndef ColorShape_h
#define ColorShape_h

#include "Shapes.hpp"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class ColorShape: public Shapes{
public:
	string color;
	Shapes &m_shape;

	ColorShape(string s, Shapes& shape) : color(s), m_shape(shape)
	{}

	string str() override
    {
		return m_shape.str() + " -> " + color;
    }
};

#endif /* ColorShape_h */

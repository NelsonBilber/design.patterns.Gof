#ifndef TxtDocument_hpp
#define TxtDocument_hpp

#include <iostream>
#include "Document.hpp"

using namespace std;

class TxtDocument: public Document
{
public:
    Document* clone() const
    {
        cout << "clone TxtDocument ..." << endl;
        return new TxtDocument();
    }
};

#endif

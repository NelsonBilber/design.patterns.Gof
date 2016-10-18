#ifndef OdtDocument_hpp
#define OdtDocument_hpp

#include <iostream>
#include "Document.hpp"

using namespace std;

class OdtDocument: public Document
{
public:
    Document* clone() const
    {
        cout << "clone OdtDocument ..." << endl;
        return new OdtDocument();
    }
};

#endif
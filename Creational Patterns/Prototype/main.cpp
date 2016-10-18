#include <iostream>
#include "OdtDocument.hpp"
#include "TxtDocument.hpp"

using namespace std;


int main(int argc, const char * argv[])
{
    
    OdtDocument *odt = new OdtDocument();
    odt->clone();
    
    TxtDocument *txt = new TxtDocument();
    txt->clone();
    
    return 0;
}




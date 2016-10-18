#ifndef TerminalExpression_hpp
#define TerminalExpression_hpp

#include "Context.hpp"
#include "ExpressionBase.hpp"
#include <iostream>

using namespace std;

class TerminalExpression: public ExpressionBase
{
public:
    void Interpreter(Context* context){
        cout << "Terminal for: " << context->Name << endl;
    }
};

#endif

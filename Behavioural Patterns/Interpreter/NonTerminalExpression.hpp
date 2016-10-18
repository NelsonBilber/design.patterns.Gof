#ifndef NonTerminalExpression_hpp
#define NonTerminalExpression_hpp

#include "Context.hpp"
#include "ExpressionBase.hpp"
#include <iostream>

using namespace std;

class NonTerminalExpression: public ExpressionBase
{
public:

	ExpressionBase* exp1;
	ExpressionBase* exp2;

    void Interpreter(Context* context){
        cout << "Non Terminal for: " << context->Name << endl;
		exp1->Interpreter(context);
		exp2->Interpreter(context);
    }
};

#endif

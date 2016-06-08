#ifndef ExpressionBase_hpp
#define ExpressionBase_hpp

#include "Context.hpp"

class ExpressionBase
{
public:
	virtual void Interpreter(Context* context) = 0;
};

#endif

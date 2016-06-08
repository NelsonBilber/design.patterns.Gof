#include <iostream>
#include "ExpressionBase.hpp"
#include "TerminalExpression.hpp"
#include "NonTerminalExpression.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
  Context* c = new Context("New context ... ");
  NonTerminalExpression* roots = new NonTerminalExpression();
  roots->exp1 = new TerminalExpression();
  roots->exp2 = new TerminalExpression();
  roots->Interpreter(c);  
  return 0;
}

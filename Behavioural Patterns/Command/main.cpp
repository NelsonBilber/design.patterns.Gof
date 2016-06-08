#include "WorkerHandler.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
  WorkerHandler handler;
  handler.GenerateHandlers();
  return 0;
}

#include "Client.hpp"
#include "AlgorithmBubbleSort.hpp"
#include "AlgorithmQuickSort.hpp"
#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
	Client client;

	unique_ptr<AlgorithmBubbleSort> aSort(new AlgorithmBubbleSort());
	unique_ptr<AlgorithmQuickSort>  qSort(new AlgorithmQuickSort());

	client.setAlgororithStrategy(aSort.get());
	client.executeByStep();
	client.setAlgororithStrategy(qSort.get());
	client.executeByStep();

	return 0;
}

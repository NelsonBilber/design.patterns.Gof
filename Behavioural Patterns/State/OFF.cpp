#include<iostream>
#include "Machine.hpp"
#include "OFF.hpp"
#include "ON.hpp"

using namespace std;

OFF::OFF(){
	cout << "OFF- ctor" << endl;
}

OFF::~OFF(){
	cout << "OFF- dtor" << endl;
}

void OFF::on(Machine* m) {
	cout <<" going from OFF to ON "<< endl;
	m->setCurrent(new ON());
	delete this;
}

void OFF::off(Machine* m){
}
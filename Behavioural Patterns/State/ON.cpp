#include<iostream>
#include "Machine.hpp"
#include "ON.hpp"
#include "OFF.hpp"

using namespace std;

ON::ON(){
	cout << "ON- ctor" << endl;
}

ON::~ON(){
	cout << "ON- dtor" << endl;
}

void ON::on(Machine* m) 
{}

void ON::off(Machine* m){
	cout << "   going from ON to OFF";
	m->setCurrent(new OFF());
	delete this;
}

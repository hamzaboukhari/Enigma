#include rotor.h
#include mapvalue.h
#include <stdexcept>
#include <iostream>
#include <fstream>

using namespace std;

Rotor::Rotor(char* file) {

}

Rotor::~Rotor() {

}

int Rotor::MapValue(int x): public MapValue{
	return x;
}



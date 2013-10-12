#include "rotor.h"
#include <iostream>
#include <fstream>

using namespace std;

Rotor::Rotor(char* file) {
	ifstream data;
	int x;
	data.open(file);
	data >> x;
	int i = 0;

	while (!data.eof()) {
		forwardRotor[i] = x - i;
		backwardRotor[x] = i - x;
		i++;
		data >> x
	}

	data.close();
}

Rotor::~Rotor() {

}

int Rotor::MapValue(int x) {
	if (x < NUM_LETTERS) {
		return (forwardRotor[x] + x)%26;
	} else {
		"error"
	}
}

int Rotor::BackwardMapValue(int x) {
	if (x < NUM_LETTERS) {
		return (backwardRotor[x] + x)%26;
	} else {
		"error"
	}
}

bool Rotor::FullRotation() {
	if (numRotations == 26) {
		numRotations = 0;
		return true;
	}
	return false;
}

void Rotor::Rotate() {
	int forwardTail = forwardRotor[NUM_LETTERS - 1];
	int backwardTail = backwardRotor[NUM_LETTERS - 1];

	for (int i = NUM_LETTERS - 2 ; i >= 0 ; i--) {
		forwardRotor[i + 1] = forwardRotor[i];
		backwardRotor[i + 1] = backwardRotor[i];
	}

	forwardRotor[0] = forwardTail;
	backwardRotor[0] = backwardTail;
	numRotations++;
}


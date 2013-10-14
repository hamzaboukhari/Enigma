#include "rotor.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

Rotor::Rotor(char* file) {
	ifstream data;
	int x;
	data.open(file);
	data >> x;
	int i = 0;

	while (!data.eof()) {
		rotorOffset[i] = x - i;
		i++;
		data >> x;
	}

	data.close();
}

Rotor::~Rotor() {

}

int Rotor::MapValue(int x) {
	if (x < NUM_LETTERS) {
		int n = x + rotorOffset[x];
		if (n < 0) {
			return 26 + (n%26);
		} else {
			return n%26;
		}
	} else {
		cout << "Invalid Value" << endl;
	}
}

int Rotor::BackwardMapValue(int x) {
	for (int i = 0 ; i < NUM_LETTERS ; ++i) {
		if (MapValue(i) == x) {
			return i;
		}
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
	std::rotate(rotorOffset, rotorOffset + 1, rotorOffset + 26);
	numRotations++;
}


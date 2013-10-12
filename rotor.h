#ifndef ROTOR_H
#define ROTOR_H
#include "mapvalue.h"
using std::map

class Rotor : public MapValue {

	static const int NUM_LETTERS = 26;
	int forwardRotor [NUM_LETTERS];
	int backwardRotor [NUM_LETTERS];

	public:
		int numRotations;
		Rotor(char* file);
		~Rotor();
		int MapValue(int);
		int BackwardMapValue(int);
		bool FullRotation();
		void Rotate();
};

#endif
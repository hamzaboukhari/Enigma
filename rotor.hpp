#ifndef ROTOR_H
#define ROTOR_H
#include "mapping.hpp"
#include <vector>
using std::vector;

class Rotor : public Mapping {
	static const int NUM_LETTERS = 26;
	int rotorOffset [NUM_LETTERS];
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
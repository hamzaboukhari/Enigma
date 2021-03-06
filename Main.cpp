#include "rotor.hpp"
#include "plugboard.hpp"
#include "reflector.hpp"
#include "mapping.hpp"
#include <iostream>
#include <vector>

using namespace std;

char Encrypt(char);
void RotateRotors();
char IntToChar(int);
int CharToInt(char);

vector<Rotor> rotors;
Plugboard* plugboard;
Reflector* reflector;

int main(int argc, char **argv) {
	if (argc < 2) {
		cout << "Not enough arguments given" << endl;
		return 1;
	}

	for (int i = 1 ; i < argc - 1 ; ++i) {
		Rotor* rotor = new Rotor(argv[i]);
		rotors.push_back(*rotor);
	}

	plugboard = new Plugboard(argv[argc - 1]);

	reflector = new Reflector();

	char c;

	while (cin) {
		c = cin.get();
		if (isupper(c)) {
			cout << Encrypt(c);
		} else if (isspace(c)) {
			cout << c;
		} else {
			continue;
		}
	}
	return 0;
}

char Encrypt(char c) {
	int x = CharToInt(c);

	x = plugboard->MapValue(x);

	for (int i = 0 ; i < rotors.size() ; ++i) {
		x = rotors[i].MapValue(x);
	}

	x = reflector->MapValue(x);

	for (int i = rotors.size() - 1 ; i >= 0 ; --i) {
		x = rotors[i].BackwardMapValue(x);
	}

	x = plugboard->MapValue(x);

	if (rotors.size() > 0) {
		RotateRotors();
	}

	return IntToChar(x);
}

void RotateRotors() {
	rotors[0].Rotate();

	for (int i = 0 ; i < rotors.size() - 1; ++i) {
		if (rotors[i].FullRotation()) {
			rotors[i + 1].Rotate();
		}
	}
}

char IntToChar(int x) {
	return 'A' + x;
}

int CharToInt(char c) {
	return c - 'A';
}
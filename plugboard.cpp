#include "plugboard.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Plugboard::Plugboard(char* file) {
	ifstream data;
	int x;
	int y;
	data.open(file);
	data >> x;
	data >> y;

	while (!data.eof()) {
		plugboard.insert(pair<int,int>(x,y));
		data >> x;
		data >> y;
	}

	data.close();
}

Plugboard::~Plugboard() {

}

int Plugboard::MapValue(int x) {
	for (map<int,int>::iterator iter = plugboard.begin()
	 ; iter != plugboard.end() ; ++iter) {
		if (x == iter->first) {
			return iter->second;
		} else if (x == iter->second) {
			return iter->first;
		}
	}
	return x;
}

#ifndef PLUGBOARD_H
#define PLUGBOARD_H
#include "mapping.hpp"
#include <map>
using std::map;

class Plugboard : public Mapping {
	map<int,int> plugboard;
	public:
		Plugboard(char* file);
		~Plugboard();
		int MapValue(int);
};

#endif
#ifndef PLUGBOARD_H
#define PLUGBOARD_H
#include "mapvalue.h"
#include <map>
using std::map;

class Plugboard : public MapValue {
	map<int,int> plugboard;
	public:
		Plugboard(char* file);
		~Plugboard();
		int MapValue(int);
};

#endif
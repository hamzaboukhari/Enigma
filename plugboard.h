#ifndef PLUGBOARD_H
#define PLUGBOARD_H
using std::map

class Plugboard {
	map<int,int> plugboard;
	public:
		Plugboard();
		~Plugboard();
		int MapValue(int);
};

#endif
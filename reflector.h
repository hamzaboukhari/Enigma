#ifndef REFLECTOR_H
#define REFLECTOR_H
#include "mapvalue.h"

class Reflector : public MapValue {
	public:
		Reflector();
		~Reflector();
		int MapValue(int);
};

#endif

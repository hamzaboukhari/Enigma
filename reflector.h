#ifndef REFLECTOR_H
#define REFLECTOR_H
#include "mapping.h"

class Reflector : public Mapping {
	public:
		Reflector();
		~Reflector();
		int MapValue(int);
};

#endif

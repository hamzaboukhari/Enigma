#ifndef REFLECTOR_H
#define REFLECTOR_H
#include "mapping.hpp"

class Reflector : public Mapping {
	public:
		Reflector();
		~Reflector();
		int MapValue(int);
};

#endif

#include "reflector.hpp"

using namespace std;

Reflector::Reflector() {

}

Reflector::~Reflector() {

}

int Reflector::MapValue(int x) {
	return (x + 13) % 26;
}

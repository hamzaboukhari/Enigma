#include reflector.h
#include mapvalue.h

using namespace std;

Reflector::Reflector() {

}

Reflector::~Reflector() {

}

int Reflector::MapValue(int x): public MapValue {
	return (x + 13) % 26;
}

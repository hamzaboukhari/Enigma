all: enigma
files = Main.o rotor.o reflector.o plugboard.o
enigma: $(files)
	g++ -o enigma $(files)
Main.o: Main.cpp
	g++ -c Main.cpp
rotor.o: rotor.cpp
	g++ -c rotor.cpp
reflector.o: reflector.cpp
	g++ -c reflector.cpp
plugboard.o: plugboard.cpp
	g++ -c plugboard.cpp
clean:
	rm -rf enigma *.o
.PHONY: all
.PHONY: clean
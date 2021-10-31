emulator:
	g++ -I headers/ src/emulator/*.cpp src/*.cpp -o bin/emulator

compiler:
	g++ src/compiler/compiler.cpp -o compiler

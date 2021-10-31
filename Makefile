emulator:
	g++ -I headers/ src/emulator/*.cpp src/*.cpp -o emulator

compiler:
	g++ src/compiler/compiler.cpp -o compiler

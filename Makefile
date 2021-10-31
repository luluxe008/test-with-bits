emulator:
	g++ -I headers/ src/emulator/emulator.cpp -o emulator

compiler:
	g++ src/compiler/compiler.cpp -o compiler

#pragma once

class Memory{
	private:
		int memory[128];
		int& curr_adrs;
		int size;
	public:
		Memory();
 		int get_current_adrs() const; // return current memory adress or memory[0]
		int* get_memory() const; // return the memory
		int* get_memory(int& size) const; // return the memory + the size in "size"
};

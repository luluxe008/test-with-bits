#pragma once
#include <string>

namespace Debug{
template <typename T>
std::string value_as_string_bit(T value){
	size_t size = sizeof(T)*8;
	std::string str = "";

	for (size_t i=size; i!=0; i--){
		if ((value >> i-1) & 1) str += "1";
		else str += "0";

	}
	return str;
}

void print_bit(unsigned int value);

};

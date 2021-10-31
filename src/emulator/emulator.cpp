#include <iostream>
#include "Debug.hpp"


int main(){
	std::cout << "bit for short = 5: " << Debug::value_as_string_bit<short>((short) 5) << std::endl;
	return 0;
};

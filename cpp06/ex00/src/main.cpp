#include "ScalarConverter.hpp"

//leanred static_cast
int main(int argc, char**argv){
	if (argc == 2)
		ScalarConverter::convert(std::string(argv[1]));
	else
		std::cout << "Stop doing stupid tests" << std::endl;
}
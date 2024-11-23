#include "ScalarConverter.hpp"

void printChar(const std::string &literal){
	if (literal.length() == 1 && std::isprint(literal[0])){
		std::cout << "1char: '" << literal[0] << "'" << std::endl;
		return;
	}
	try{
		int num = std::stoi(literal);
		std::cout << "num is " << num << std::endl;
		if (num >= 32 && num <= 127)
			std::cout << "2char: '" << static_cast<char>(num) << "'" << std::endl;
		else
			std::cout <<  "3char: impossible" << std::endl;
	}
	catch (const std::invalid_argument&){
		std::cout <<  "4char: impossible" << std::endl;
	}
	catch (const std::out_of_range){
		std::cout <<  "5char: impossible" << std::endl;
	}
}

void printInt(const std::string& literal){
	
}

void ScalarConverter::convert(const std::string& literal){
	printChar(literal);
	printInt(literal);
}
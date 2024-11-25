#pragma once

#include "ScalarConverter.hpp"

// template<typename T>
// void printValue(T value){

// };
template <typename T>
T getValue(const std::string literal) {
	unsigned long length = literal.length();
	auto num = 0;

	if (literal.length() == 1 && std::isprint(literal[0])){
		if constexpr (std::is_same<T, char>::value)
            return static_cast<char>(literal[0]);
	}
	else
		std::cout << "char: impossible" << std::endl;
	try{
		num = std::stoi(literal);
		if (std::to_string(num).length() == length){
            if constexpr (std::is_same<T, int>::value)
                return num;
		}
	}
	catch (const std::invalid_argument&){
		std::cout << "1int: impossible" << std::endl;
	}
	catch (const std::out_of_range&){
		std::cout << "2int: impossible" << std::endl;
	}
	try{
		if (literal.find_first_of(".", 0) == literal.find_last_of(".",length) &&
			literal.find_last_of("f", length) == length){
			num = std::stof(literal);
			if constexpr (std::is_same<T, float>::value)
				return num;
			}
	}
	catch (const std::invalid_argument&){
	std::cout << "1float: impossible" << std::endl;
	}
	catch (const std::out_of_range&){
		std::cout << "2float: impossible" << std::endl;
	}
	    throw std::invalid_argument("Conversion to the specified type is impossible");

};

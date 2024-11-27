#pragma once

#include "ScalarConverter.hpp"

template<typename T>
void printValue(T value){
	// std::cout<<value<<std::endl;
		if  ((value < 32 && value > -1) || (value == 127))
				std::cout << "char: Non displayable" <<std::endl;
		else if(value < 0 || value > 127 || value != value)
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(value) << "'" <<std::endl;
		if (value < static_cast<float>(std::numeric_limits<int>::min()) ||
			value > static_cast<float>(std::numeric_limits<int>::max()) || value != value )	
				std::cout << "int: impossible" << std::endl;
		else if (value == static_cast<float>(std::numeric_limits<int>::max()))
			std::cout << "int: " << std::numeric_limits<int>::max() << std::endl;
		else if (value == static_cast<float>(std::numeric_limits<int>::min()))
			std::cout << "int: " << std::numeric_limits<int>::min() << std::endl;
		else
			std::cout << "int: " << static_cast<int>(value) << std::endl;
		if (value < std::numeric_limits<double>::lowest() || value > std::numeric_limits<double>::max())
			std::cout << "float: " << (value > 0 ? "+" : "") << static_cast<float>(value) << "f" << std::endl;
		else if (value < std::numeric_limits<float>::lowest() || value > std::numeric_limits<float>::max())
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << value << std::endl;
}
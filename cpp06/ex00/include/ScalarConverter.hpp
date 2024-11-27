#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <iomanip> 
#include <limits>
#include <cmath>

class ScalarConverter{
	
	public :
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter&) = delete;
		ScalarConverter& operator=(const ScalarConverter&) = delete;
		~ScalarConverter() = delete;
		static void convert(const std::string&);
};

template<typename T>
void printValue(T value);

#endif
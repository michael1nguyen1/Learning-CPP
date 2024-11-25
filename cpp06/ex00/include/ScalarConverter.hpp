#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <stdexcept>

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
template<typename T>
T getValue(std::string);

#endif
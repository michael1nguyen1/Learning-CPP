#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <stdexcept>

class ScalarConverter{
	
	public :
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter&) = delete;
		ScalarConverter& operator=(const ScalarConverter&) = delete;
		~ScalarConverter() = delete;
		static void convert(const std::string&);

};

#endif
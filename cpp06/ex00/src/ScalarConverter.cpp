#include "ScalarConverter.hpp"
#include "ScalarConverter.tpp"

bool isNumber(const std::string& str){
	return str.find_first_not_of("-+0123456789") == std::string::npos;
}

bool isFloat(const std::string& str){
	if (str == "nanf" || str == "-inff" || str == "inff")
		return true;
	return str.find_first_not_of("-+0123456789.f") == std::string::npos && str[str.length() - 1] == 'f';
}

bool isDouble(const std::string& str){
	if (str == "nan" || str == "-inf" || str == "inf")
		return true;
	return str.find_first_not_of("-+0123456789.") == std::string::npos;
}

void ScalarConverter::convert(const std::string& literal){
		if (literal.length() == 1 && (literal[0] > '9' || literal[0] < '0'))
			return printValue<char>(literal[0]);
		if (isNumber(literal)){
			try{
				return printValue<int>(std::stoi(literal));
			}
			catch (const std::out_of_range){}
		}
		if (isFloat(literal)){
			try{
				return printValue<float>(std::stof(literal));
			}
			catch (const std::out_of_range){}
		}
		if (isDouble(literal)){
			try{
				return printValue<double>(std::stod(literal));
			}
			catch (const std::out_of_range){}
		}
	std::cout << "invalid input" << std::endl;
}
#include "ScalarConverter.hpp"
#include "ScalarConverter.tpp"

// void printChar(const std::string &literal){
// 	if (literal.length() == 1 && std::isprint(literal[0])){
// 		std::cout << "1char: '" << literal[0] << "'" << std::endl;
// 		return;
// 	}
// 	try{
// 		int num = std::stoi(literal);
// 		std::cout << "num is " << num << std::endl;
// 		if (num >= 32 && num <= 127)
// 			std::cout << "2char: '" << static_cast<char>(num) << "'" << std::endl;
// 		else
// 			std::cout <<  "3char: Non displayable" << std::endl;
// 	}
// 	catch (const std::invalid_argument&){
// 		std::cout <<  "4char: impossible" << std::endl;
// 	}
// 	catch (const std::out_of_range){
// 		std::cout <<  "5char: impossible" << std::endl;
// 	}
// }

// void printInt(const std::string& literal){
// 	if (literal.length() == 1 && std::isprint(literal[0])){
// 		std::cout << "0int: '" << static_cast<int>(literal[0]) << "'" << std::endl;
// 		return;
// 	}
// 	try{
// 		int num = std::stoi(literal);
// 		std::cout << "1int : " << num << std::endl;
// 	}
// 	catch (const std::invalid_argument&){
// 		std::cout <<  "2int: impossible" << std::endl;
// 	}
// 	catch (const std::out_of_range){
// 		std::cout <<  "3int: impossible" << std::endl;
// 	}
// }

bool validateLiteral(const std::string &literal){
	if(literal.length() == 2)
		return true;
	return true;
}

void ScalarConverter::convert(const std::string& literal){
// 	auto value;
// 	if (validateLiteral(literal)){
// 		value = getValue<std::string>(literal);
// 	}
// }

try {

		auto value = getValue<std::string>(literal);
		std::cout << "Converted value: " << value << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
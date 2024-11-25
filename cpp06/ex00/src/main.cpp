#include "ScalarConverter.hpp"

int main(int argc, char**argv){
	if (argc == 2){
		ScalarConverter::convert(std::string(argv[1]));
		// try{
		// 	int i = std::stoi(argv[1]);
		// 	float f = std::stof(argv[1]);
		// 	double d = std::stod(argv[1]);

		// 	std::cout << i << std::endl;
		// 	std::cout << f << std::endl;
		// 	std::cout << d << std::endl;
		// }
		// catch (const std::invalid_argument&){
		// 	std::cout <<  "4char: impossible" << std::endl;
		// }
		// catch (const std::out_of_range){
		// 	std::cout <<  "5char: impossible" << std::endl;
		// }
	}
	else
		std::cout << "Stop doing stupid tests" << std::endl;
}
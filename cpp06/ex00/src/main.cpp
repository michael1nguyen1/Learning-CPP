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
	else{

		std::cout << "Stop doing stupid tests" << std::endl;
		std::cout << "INT MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<int>::max()));
		std::cout << std::endl << "INT MIN" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<int>::min()));
		std::cout << std::endl << "FLOAT MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::max()) + 'f');
		std::cout << std::endl << "FLOAT LOWEST" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::lowest()) + 'f');
		std::cout << std::endl << "DOUBLE MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::max()));
		std::cout << std::endl << "DOUBLE LOWEST" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::lowest()));
		std::cout << std::endl << "PAST DOUBLE MAX" << std::endl;
		ScalarConverter::convert("1e400");
	}
}
#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Give me one file dummy!" <<std::endl;
		return (-1);
	}

	try{
		std::string file = argv[1];
		std::cout << "argv is " << file << "\n";
		Bitcoin blah(file);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
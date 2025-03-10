#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Give me one file dummy!" <<std::endl;
		return (-1);
	}

	try{
		std::string file = argv[1];
		Bitcoin blah;
		blah.exchange(argv[1]);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
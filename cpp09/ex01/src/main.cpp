#include "RPN.hpp"

int main(int argc, char*argv[]){
	if (argc != 2){
		std::cout << "I'm not magic I still need numbers to calculate\n";
		return -1;
	}

	try{
		RPN rpn;
		rpn.calculateNotation(argv[1]);
	}
	catch (std::exception& e){
		std::cout << e.what() << "\n";
	}
	return 0;
}
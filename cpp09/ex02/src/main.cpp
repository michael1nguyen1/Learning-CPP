#include "PmergeMe.hpp"
#include <regex>

int main(int argc, char **argv){
	
	std::vector<int> vec;
	std::deque<int> deq;
	int counter = 0;

	try{
		for (int i = 1; i < argc; i++){
			if(!isdigit(argv[i][0])){
				std::cout << "Error" << std::endl;
				return 1;
			}
			deq.emplace_back(std::stoi(argv[i]));
			vec.emplace_back(std::stoi(argv[i]));
			counter++;
		}

		PmergeMe blah(counter);
		blah.fordJohnsonMe(vec);
		blah.fordJohnsonMe(deq);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}
#include "PmergeMe.hpp"
#include "Utils.hpp"
#include <chrono>
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
		
		Utils::print(vec, "Before: ");
		auto start = std::chrono::high_resolution_clock::now();
		blah.fordJohnsonMe(vec);
		auto end = std::chrono::high_resolution_clock::now();
		Utils::print(vec, "After: ");
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << "ns" << std::endl;

		start = std::chrono::high_resolution_clock::now();
		blah.fordJohnsonMe(deq);
		end = std::chrono::high_resolution_clock::now();
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << "ns" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
		return 1;
	}

	return 0;
}
#include "easyFind.hpp"
#include <iostream>
#include <vector>
#include <deque>

int main(){
	std::vector<int> vec (5);
	std::deque<int> deq (5);
	int value;

	for (size_t i = 1; i <= vec.size(); i++)
		vec[i] = i;

	for (size_t i = 0; i < deq.size(); i++)
		deq[i] = i + 5;

	for(const auto& i : vec)
		std::cout << "vec [" << i << "]: " << i << "\n";

	for (const auto& i : deq)
		std::cout << "deq [" << i - 5 << "]: " << i << "\n";

	/*####vec###*/
	try{
		value = 4;
		std::vector<int>::iterator found;
		found = easyFind(vec, value);
		std::cout << "Vec position of value " << value << " is: " << std::distance(vec.begin(), found) << std::endl;
	}
	catch (std::out_of_range e){
		std::cout << value << " " << e.what() << std::endl;
	}

	try{
		value = 9;
		std::vector<int>::iterator found;
		found = easyFind(vec, value);
	}
	catch (std::out_of_range e){
		std::cout << value << " " << e.what() << std::endl;
	}

	/*####deq###*/
	try{ 
		value = 6;
		std::deque<int>::iterator found;
		found = easyFind(deq, value);
		std::cout << "Deq position of value " << value << " is: " << std::distance(deq.begin(), found) << std::endl;
	}
	catch (std::out_of_range e){
		std::cout << e.what() << " " << std::endl;
	}

	try{
		value = 10;
		std::deque<int>::iterator found;
		found = easyFind(deq, value);
	}
	catch (std::out_of_range e){
		std::cout << value << " " << e.what() << std::endl;
	}
}

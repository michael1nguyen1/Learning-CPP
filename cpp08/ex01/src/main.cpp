#include "Span.hpp"
#include <iostream>

int main(){
	Span span1(7);
	Span span2(7);
	Span span3(0);

	for (int i = 0; i < 5; i++){
		span1.addNumber(i);
	}
	span1.addNumber(2147483647);
	span1.addNumber(-2147483648);

	std::cout << "Printing span1\n";
	for (const auto& it : span1.getNumbers())
		std::cout << it << "\n";
	
	std::vector<int>::iterator begin = span1.getNumbers().begin();
	std::vector<int>::iterator end = span1.getNumbers().end() - 1;
	try{
		span2.addNumbers(begin, end);
		std::cout << "\nPrinting span2\n";
		for (const auto& it : span2.getNumbers())
			std::cout << it << "\n";
	}
	catch (const std::exception& e){
		std::cout << "Span2 Exception thrown: " << e.what() << std::endl;
	}
	
	try{
		std::cout << "\nSpan1 Shortest span is: " << span1.shortestSpan() << std::endl;
		std::cout << "Span1 Longest span is: " << span1.longestSpan() << std::endl;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		span1.addNumber(4);
	}
	catch (const std::exception& e){
		std::cout << "\nSpan1 Exception thrown: " << e.what() << std::endl;
	}

	try{
		span3.addNumber(12);
	}
	catch (const std::exception& e){
		std::cout << "Span3 Exception thrown: " << e.what() << std::endl;
	}
	try{
		span3.longestSpan();
	}
	catch (const std::exception& e){
		std::cout << "Span3 Exception thrown: " << e.what() << std::endl;
	}

	try{
		span3.shortestSpan();
	}
	catch (const std::exception& e){
		std::cout << "Span3 Exception thrown: " << e.what() << std::endl;
	}
}
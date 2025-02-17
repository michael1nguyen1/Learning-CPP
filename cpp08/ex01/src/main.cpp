#include "Span.hpp"
#include <iostream>

int main(){
	Span span1(7);
	Span span2;

	for (int i = 0; i < 7; i++){
		span1.addNumber(i * (i + 1));
	}

	for (const auto& it : span1.getNumbers())
		std::cout << it << "\n";

	try{
		std::cout << "Span1 Shortest span is: " << span1.shortestSpan() << std::endl;
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
		span2.longestSpan();
	}
	catch (const std::exception& e){
		std::cout << "Span2 Exception thrown: " << e.what() << std::endl;
	}

	try{
		span2.shortestSpan();
	}
	catch (const std::exception& e){
		std::cout << "Span2 Exception thrown: " << e.what() << std::endl;
	}

	try{
		span2.addNumber(12);
	}
	catch (const std::exception& e){
		std::cout << "Span2 Exception thrown: " << e.what() << std::endl;
	}
}
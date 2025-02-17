#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <limits>

Span::Span() {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& other){
	_maxSize = other._maxSize;
	_numbers = other._numbers;
}

Span& Span::operator=(const Span& other){
	if (this != &other){
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number){

	if (_numbers.size() < _maxSize)
		_numbers.emplace_back(number);
	else
		throw OverSize();
}

int Span::shortestSpan(){

	if (_numbers.size() <= 1)
		throw NoSpan();

	int counter = std::numeric_limits<int>::max();
	std::sort(_numbers.begin(), _numbers.end());
	for (size_t i = 0; i < _numbers.size() - 1; i++){
		if(_numbers[i + 1] - _numbers[i] < counter)
			counter = _numbers[i + 1] - _numbers[i];
	}
	return counter;
}

int Span::longestSpan(){
	if (_numbers.size() <= 1){
		throw NoSpan();
	}

	std::sort(_numbers.begin(), _numbers.end());
	return _numbers.back() - _numbers.front();
}

unsigned int Span::getMax(){ return _maxSize; }

std::vector<int> Span::getNumbers() { return _numbers; }
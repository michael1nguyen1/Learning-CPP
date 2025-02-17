#include "Span.hpp"
#include <iostream>
#include <algorithm>

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
	if (_numbers.size() <= _maxSize)
		_numbers.emplace_back(number);
	else
		throw OverSize();
}

unsigned int Span::shortestSpan(){
	unsigned int counter = 1;

	if (_numbers.size() <= _maxSize)
		std::sort(_numbers.begin(), _numbers.end());
	else
		throw NoSpan();
	for (size_t i = 0; i < _numbers.size(); i++){
		if(_numbers[i + 1] - _numbers[i] < counter)
			counter = _numbers[i + 1] - _numbers[i];
	}
	return counter;
}

unsigned int Span::longestSpan(){
	if (_numbers.size() <= _maxSize)
		std::sort(_numbers.begin(), _numbers.end());
	else
		throw NoSpan();
	return _numbers.back() - _numbers.front();
}

unsigned int Span::getMax(){ return _maxSize; }
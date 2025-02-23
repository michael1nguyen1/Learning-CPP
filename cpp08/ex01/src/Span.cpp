#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <limits>
#include <cstdlib>

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

void Span::addNumbers(std::vector<int>::iterator& pos1, std::vector<int>::iterator& pos2){
	size_t dist = llabs(std::distance(pos1, pos2));
	if (pos1 == pos2 && _numbers.size() < _maxSize){
		addNumber(*pos1);
		return ;
	}

	if (dist + getNumbers().size() < _maxSize){
		if (pos1 < pos2){
			for (auto it = pos1; it <= pos2; it++)
				addNumber(*it);
		}
		else{
			for (auto it = pos1; it >= pos2; it--)
				addNumber(*it);
		}
	}
	else
		throw OverSize();
}

long long Span::shortestSpan(){

	if (_numbers.size() <= 1)
		throw NoSpan();

	long long counter = std::numeric_limits<int>::max();
	std::sort(_numbers.begin(), _numbers.end());
	for (size_t i = 0; i < _numbers.size() - 1; i++){
		long long diff = std::abs(static_cast<long long> (_numbers[i + 1] - _numbers[i]));
		if( diff < counter){
			counter = diff;
		}
	}
	return counter;
}

unsigned int Span::longestSpan(){
	if (_numbers.size() <= 1){
		throw NoSpan();
	}

	std::sort(_numbers.begin(), _numbers.end());
	return _numbers.back() - _numbers.front();
}

unsigned int Span::getMax(){ return _maxSize; }

std::vector<int>& Span::getNumbers() { return _numbers; }
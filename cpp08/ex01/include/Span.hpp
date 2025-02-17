#pragma once

#include <exception>
#include <vector>

class Span{
	public:
		Span();
		Span(unsigned int);
		Span(const Span&);
		Span& operator=(const Span&);
		~Span();

		void addNumber(int);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		unsigned int getMax();

		class NoSpan : public std::exception {
			const char *what(void) const noexcept { return "No Span Available"; }
		};

		class OverSize : public std::exception{
			const char *what(void) const noexcept { return "Max size have been reached"; }
		};

	private:
		unsigned int _maxSize = 0;
		std::vector<int> _numbers = {};
};
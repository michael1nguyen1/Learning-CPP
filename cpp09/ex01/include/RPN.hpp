#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <exception>

class RPN{
	public:
		RPN() = default;
		RPN(const RPN&);
		RPN& operator=(const RPN&);
		~RPN() = default;
		std::stack<int> getStack();
		void calculateNotation(std::string);
		int performOperation(int, int, char);

	private:
		std::stack<int> _data;

	class Error : public std::exception{
		public:
			Error() : exception() {}
			virtual const char* what() const noexcept { return "Error"; }
	};
};
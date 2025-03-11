#include "RPN.hpp"
#include <cctype>
#include <regex>

RPN::RPN(const RPN& other){ _data = other._data; }

RPN& RPN::operator=(const RPN& other){
	if (this != &other)
		_data = other._data;
	return *this;
}

std::stack<int> RPN::getStack() { return _data; } 

int RPN::performOperation(int first, int second, char op){
	switch (op){
		case '+': return first + second;
		case '-': return first - second;
		case '*': return first * second;
		case '/': if (second == 0)
			throw Error();
			return first / second;
		default: return 0;
	};
}

void RPN::calculateNotation(std::string notation){
	
	std::regex pattern (R"(^[0-9](\s+[0-9]|\s+[+*/\-])*$)");
	if (!std::regex_match(notation, pattern)){
		std::cout << "Error1\n";
		return;
	}

	for (auto ch : notation){
		if (isdigit(ch))
			_data.emplace(ch - '0');
		else if (isspace(ch))
			continue;
		else{
			if (_data.size() < 2){
				std::cout << "Error2\n";
				return;
			}
			else{
				int second = _data.top();
				_data.pop();
				int first = _data.top();
				_data.pop();
				_data.emplace(performOperation(first, second, ch));
			}
		}
	}
	if (_data.size() != 1)
		std::cout << "Error3\n";
	else
		std::cout << _data.top() << "\n";
}
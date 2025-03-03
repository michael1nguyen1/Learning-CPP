#pragma once

#include <unordered_map>
#include <string>
#include <exception>

class Bitcoin{
	public:
		Bitcoin() = default;
		Bitcoin(const std::string&);
		Bitcoin(const Bitcoin&);
		Bitcoin& operator=(const Bitcoin&);
		~Bitcoin() = default;

	private:
		void _validateHeader(std::ifstream&, std::string&);
		std::unordered_map<std::string, float> _data {};

	class ValidateFile : std::exception{
		
	};
};
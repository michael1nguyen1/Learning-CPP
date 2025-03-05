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
		void _validateHeaderRow(std::ifstream&);
		void _validateDataRows(std::ifstream&);
		std::unordered_map<std::string, float> _data {};

	class ValidateFile : public std::exception{
		const char *what() const noexcept { return "Stop doing stupid stuff bad data.csv"; }
	};
};
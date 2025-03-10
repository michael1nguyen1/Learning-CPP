#pragma once

#include <map>
#include <string>
#include <exception>

class Bitcoin{
	public:
		Bitcoin();
		Bitcoin(const Bitcoin&);
		Bitcoin& operator=(const Bitcoin&);
		~Bitcoin() = default;
		void exchange(const std::string&);
		bool validateDate(std::string);

	private:
		std::map<std::string, float> _data {};

	class ValidateFile : public std::exception{
		const char *what() const noexcept { return "Error: could not open file"; }
	};
};
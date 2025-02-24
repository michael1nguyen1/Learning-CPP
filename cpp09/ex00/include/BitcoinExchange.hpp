#pragma once

#include <unordered_map>
#include <string>

class Bitcoin{
	public:
		Bitcoin() = default;
		Bitcoin(const std::string&);
		Bitcoin(const Bitcoin&);
		Bitcoin& operator=(const Bitcoin&);
		~Bitcoin() = default;

	private:
		std::unordered_map<std::string, float> _data {}; 
};
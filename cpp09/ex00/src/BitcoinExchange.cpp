#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <regex>

Bitcoin::Bitcoin(const std::string& file){
	std::ifstream data(file);

	if (!data.is_open())
		throw std::runtime_error("Failed opening file");

	std::string line;
	_validateHeader(data, line);
		while (std::getline(data, line)){
		std::string key, value;
		std::istringstream lineStream(line);
			if (std::getline(lineStream, key, ',') && std::getline(lineStream, value)){
				_data.emplace(key, std::stof(value));
			}	
			key.clear();
			value.clear();
	}
	
	for (auto it = _data.begin(); it != _data.end(); ++it){
		std::cout << it->first << " " << it->second << std::endl;
	}
}

void Bitcoin::_validateHeader(std::ifstream& data, std::string& line){
	std::getline(data, line);
	std::regex pattern("(date,exchange_rate)");
	if (std::regex_match(line, pattern))
		return ;
	throw std::exception
}
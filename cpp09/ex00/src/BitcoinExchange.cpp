#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <regex>
#include <chrono>

Bitcoin::Bitcoin(const std::string& file){
	std::ifstream data(file);

	if (!data.is_open())
		throw std::runtime_error("Failed opening file");

	_validateHeaderRow(data);
	_validateDataRows(data);
		
	
	for (auto it = _data.begin(); it != _data.end(); ++it){
		std::cout << it->first << " " << it->second << std::endl;
	}
}

void Bitcoin::_validateHeaderRow(std::ifstream& data){
	std::string line;
	std::getline(data, line);
	std::regex pattern("(date,exchange_rate)");
	if (std::regex_match(line, pattern))
		return ;
	else
		throw ValidateFile();
}

void Bitcoin::_validateDataRows(std::ifstream& data){
	std::string line;
	std::regex pattern(R"(^\d{4}-\d{2}-\d{2},\d+(\.\d{1,2})?$)");

	std::chrono::year_month_day date;
	while (std::getline(data, line)){
		if (std::regex_match(line, pattern))
		// std::string key, value;
		// std::istringstream lineStream(line);
		// 	if (std::getline(lineStream, key, ',') && std::getline(lineStream, value)){
		// 		_data.emplace(key, std::stof(value));
		// 	}	
		// 	key.clear();
		// 	value.clear();
	}
}
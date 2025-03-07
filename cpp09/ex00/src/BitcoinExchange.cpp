#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <regex>
#include <chrono>


Bitcoin::Bitcoin(){
	std::ifstream dataBase("data.csv");
	
	if (!dataBase.is_open())
		throw std::runtime_error("Failed to open data.csv");
	
	std::string line;
	float price;

	getline(dataBase, line);
	while (getline(dataBase, line)){
		std::stringstream(line.substr(line.find(",") + 1)) >> price;
		_data.emplace(line.substr(0, line.find(",")), price);
	}
}

Bitcoin::Bitcoin(const Bitcoin& other) : _data(other._data) {}

Bitcoin& Bitcoin::operator=(const Bitcoin& other){
	if (this != &other){
		_data = other._data;
	}
	return *this;
}


void Bitcoin::validateInputFile(const std::string& file){
	std::ifstream inputFile(file);
	
	if (!inputFile.is_open())
		throw ValidateFile();

	std::string line;
	std::smatch match;
	std::regex pattern(R"(^(\d{4}-\d{2}-\d{2})\s\|\s(-?\d*(\.\d+)?)$)");

	std::getline(inputFile, line);
	while (std::getline(inputFile, line)){
		if (!std::regex_match(line, match, pattern) || 
			!validateDate(match[1].str())){
			std::cout << "Error: bad input => " + line << "\n";
			continue;
		}
		float value = stof(match[4]);
		if (value < 0){
			std::cout << "Error: not a positive number.\n";
			continue;
		}

		if (value > 1000){
			std::cout << "Error: too large a number.\n";
			continue;
		}
		
		auto it = _data.lower_bound(match[1]);
		if (it != _data.end() && match[1] == it->first){
			std::cout << match[1] << " => " << value << " = " 
			<< value * it->second << "\n";
		}
		else{
			--it;
			std::cout << match[1] << " => " << value << " = " 
			<< value * it->second << "\n";
		}

	}
}

bool Bitcoin::validateDate(std::string str){

	std::istringstream ss(str);
    std::chrono::year_month_day ymd;
    ss >> std::chrono::parse("%Y-%m-%d", ymd);

	return ymd.ok();
}
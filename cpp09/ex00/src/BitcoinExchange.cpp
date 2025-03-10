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


void Bitcoin::exchange(const std::string& file){
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
		float value = stof(match[2]);
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

	int year, month, day;
	char dash1, dash2;
	std::istringstream ss(str);

	ss >> year >> dash1 >> month >> dash2 >> day;
    std::chrono::year_month_day ymd { 
		std::chrono::year{year},
		std::chrono::month{static_cast<unsigned int>(month)},
		std::chrono::day{static_cast<unsigned int>(day)},
	};

	return ymd.ok();
}
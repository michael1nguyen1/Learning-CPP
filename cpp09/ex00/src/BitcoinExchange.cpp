#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

Bitcoin::Bitcoin(const std::string& file){
	std::ifstream data(file);

	if (!data.is_open()){
		throw std::runtime_error("Failed opening file");
	}

	std::string line;
	std::getline(data, line);
	while (std::getline(data, line)){
	// std::cout << "line is " << line << std::endl;
	std::string key, value;
	std::istringstream lineStream(line);
		if (std::getline(lineStream, key, ',') && std::getline(lineStream, value)){
			// std::cout << "key is " << key << " " << "value is " << value << std::endl;
			_data.emplace(key, std::stof(value));
		}	
		key.clear();
		value.clear();
	}
	
	for (auto it = _data.begin(); it != _data.end(); ++it){
		std::cout << it->first << " " << it->second << std::endl;
	}
}
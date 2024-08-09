/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:13:05 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/09 19:18:24 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "include/Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Debug: I love having extra bacon." << std::endl;
}

void Harl::info(void) 
{
	std::cout << "Info: I cannot believe adding extra bacon costs more money."<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free."<< std::endl;
}

void Harl::error(void)
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now."<< std::endl;
}

int Harl::check_level(std::string level)
{
	if (level == "DEBUG") return DEBUG;
    if (level == "INFO") return INFO;
    if (level == "WARNING") return WARNING;
    if (level == "ERROR") return ERROR;
    return UNKNOWN;
}

void Harl::complain(std::string level)
{

	void (Harl::*funcPtrs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; // check this
	int	level_enum = check_level(level);

	switch (level_enum)
	{
		case DEBUG;
		
		
	}
}
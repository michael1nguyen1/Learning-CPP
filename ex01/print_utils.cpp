/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 23:53:57 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/02 23:54:41 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

void PhoneBook::print_contact(int index)
{
	std::cout << entries[index].get_first_name() << std::endl;
	std::cout << entries[index].get_last_name() << std::endl;
	std::cout << entries[index].get_nickname() << std::endl;
	std::cout << entries[index].get_phone_number() << std::endl;
	std::cout << entries[index].get_dark_secret() << std::endl;
}

std::string PhoneBook::formatEntry(const std::string entry) 
{
	if (entry.length() > 10)
		return entry.substr(0, 9) + ".";
	else 
		return entry;
}

void	PhoneBook::print_contacts()
{
	for (int i = 0; i < max_reached; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_first_name()) << "|";
		std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_last_name()) << "|";
		std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_nickname()) << "|";
		std::cout << std::endl;
	}
}

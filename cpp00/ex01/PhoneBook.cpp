/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:39 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:13:05 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

PhoneBook::PhoneBook() : current_size(0), max_reached (0) {}

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

void	PhoneBook::add_contact(std::string first_name, std::string last_name,
				std::string nickname, std::string phone_num, std::string dark_secret)
{
	if (current_size == 8)
		current_size = 0;
	if (current_size < 8)
	{
		entries[current_size] = Contacts(first_name,
		last_name, nickname, phone_num, dark_secret);
		current_size++;
		if (max_reached != 8)
			max_reached++;
	}
}

int	PhoneBook::get_max_reached() {return max_reached;}

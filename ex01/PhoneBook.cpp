/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:35:01 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/02 23:32:31 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"
#include <cstdlib>

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

bool	get_info(std::string str, std::string &member)
{
	while (true)
	{
		std::cout << str << ":" << std::endl;
		std::getline(std::cin, member);
		if (std::cin.eof())
		{
			std::cout << "\nUnkind people don't deserve a phonebook!\n";
			return false;
		}
		if (member.empty())
		{
			std::cout << "There must be a " << str << std::endl;
			continue;
		}
		break;
	}
	return true;
}

int do_add(PhoneBook &phonebook) 
{
    std::string first, last, number, secret, nickname;

	if (!get_info("First name", first))
		return 1;
	if (!get_info("Last name", last))
		return 1;
	if (!get_info("Nickname", nickname))
		return 1;
	if (!get_info("Phone number", number))
		return 1;
	if (!get_info("Darkest secret", secret))
		return 1;
    phonebook.add_contact(first, last, nickname, number, secret);
	return 0;
}

int do_search(PhoneBook &phonebook)
{
	std::string input;
	int	i = 0;
	
	phonebook.print_contacts();
	do
	{
		if (phonebook.get_max_reached() == 0)
		{
			std::cout << "\nPhonebook is empty\n";
			return (0);	
		}
		std::cout << "Give me index" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nUnkind people don't deserve a phonebook!\n";
			return 1;
		}
		if (!input.empty() && input.find_first_not_of("12345678") == std::string::npos
			&& std::stoi(input) <= phonebook.get_max_reached())
		{
			i = std::stoi(input);
			phonebook.print_contact(i - 1);
		}
		else
			i = 0;
	} while (i == 0);
	return 0;
}

int main()
{
	PhoneBook phonebook;
	std::string cmd;
	
	do
	{
		std::cout << "\nGive me a command?\n\n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "\nUnkind people don't deserve a phonebook!\n";
			return 0;
		}
		else if (cmd == "ADD")
		{
			if(do_add(phonebook))
				return 1;
		}
		else if (cmd == "SEARCH")
		{
			if (do_search(phonebook))
				return 1;
		}
		else if (cmd == "EXIT")
			return 0;
		else
			std::cout << "You gave a wrong command try again\n";
	} while (cmd != "EXIT");
	return 0;
}	
	
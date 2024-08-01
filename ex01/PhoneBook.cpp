/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:35:01 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 22:04:34 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

void PhoneBook::print_contact(int index)
{
	std::cout << entries[index].get_first_name() << std::endl;
	std::cout << entries[index].get_last_name() << std::endl;
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
		std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_phone_number()) << "|";
		std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_dark_secret()) << "|";
		std::cout << std::endl;
	}
}

void do_add(PhoneBook &phonebook)
{
	std::string first, last, number, secret;
	
	std::cout << "First name: " << std::endl;
	std::getline(std::cin, first);
	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, last);
	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, number);
	std::cout << "Dark secret: "<< std::endl;
	std::getline(std::cin, secret);
	std::cout << std::endl;
	
	phonebook.add_contact(first, last, number, secret);
}

void do_search(PhoneBook &phonebook)
{
	std::string input;
	int	i = -1;
	
	phonebook.print_contacts();
	do
	{
		std::cout << "Give me index" << std::endl;
		std::getline(std::cin, input);
		// if (std::cin.eof())
		// {
		// 	std::cout << "You fucked up1!\n";
		// 	return ;
		// }
		if (input.find_first_not_of("12345678") == std::string::npos)
		{
			i = std::stoi(input);
			phonebook.print_contact(i);
		}
		i++;
	} while (i == -1);
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
			std::cout << "You fucked up2!\n";
			return 0;
		}
		else if (cmd == "ADD")
			do_add(phonebook);
		else if (cmd == "SEARCH")
			do_search(phonebook);
		else if (cmd == "EXIT")
			return 0;
		else
			std::cout << "You gave a wrong command try again\n";
	} while (cmd != "EXIT");
	return 0;
}	
	
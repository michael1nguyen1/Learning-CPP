/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:35:01 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 17:57:58 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

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
	
	phonebook.add_contact(first, last, number, secret);
}

void do_search(PhoneBook &phonebook)
{
	phonebook.print_contacts;
}

int main()
{
	PhoneBook phonebook;
	std::string cmd;
	
	do
	{
		std::cout << "\n\nGive me a command?\n\n1. ADD\n2. SEARCH\n3. EXIT\n" << std::endl;
		std::getline(std::cin, cmd);

		if (std::cin.eof())
		{
			std::cout << "You fucked up!\n";
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
	
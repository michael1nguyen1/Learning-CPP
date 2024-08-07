/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:28 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:07:32 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

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
		else if (str == "Phone number" &&
			member.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Phone numbers on earth only have numbers" << std::endl;
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
			std::cout << "\nPhonebook closed!\n";
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

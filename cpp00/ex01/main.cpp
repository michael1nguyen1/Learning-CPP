/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:35:01 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/02 23:58:29 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

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
			std::cout << "\nPhonebook closed!\n";
			return 1;
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
	
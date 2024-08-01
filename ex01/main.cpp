/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:35:01 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 11:40:14 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contacts
{
	public:
	
	Contacts(std::string& first_name, std::string& last_name,
		std::string phone_num, std::string dark_secret);
	
	std::string get_first_name() {return first_name;}
	std::string get_last_name() {return last_name;}
	std::string get_phonephone_num() {return phone_num;}
	std::string get_darkdark_secret() {return dark_secret;}
	
	private:

	std::string first_name;
	std::string last_name;
	std::string phone_num;
	std::string dark_secret;
	
};

class Phonebook
{
	public:

	private:	
};

void do_add()
{
	std::cout << "adding\n";
}

void do_search()
{
	std::cout << "searching\n";
}

int main()
{
	std::string cmd;
	
	do
	{
		std::cout << "\nGive me a command?\n\n1. ADD\n2. SEARCH\n3. EXIT\n" << std::endl;
		std::getline(std::cin, cmd);

	if (std::cin.eof())
	{
		std::cout << "You fucked up!\n";
		return 0;
	}
	else if (cmd == "ADD")
		do_add();
	else if (cmd == "SEARCH")
		do_search();
	else if (cmd == "EXIT")
		return 0;
	else
		std::cout << "You gave a wrong command try again\n";
	} while (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT");

	return 0;
}	
	
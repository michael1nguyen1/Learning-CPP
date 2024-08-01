/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:35:01 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 16:30:36 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

// class Contacts
// {
// 	public:
// 		Contacts() 
// 		{
// 			std::cout << "Constructor contacts\n";
// 		};
// 		Contacts(std::string& first_name, std::string& last_name,
// 			std::string &phone_num, std::string &dark_secret): first_name(first_name), 
// 			last_name(last_name), phone_num(phone_num), dark_secret(dark_secret) 
// 		{
// 			std::cout << "2nd constructor";
// 		};
// 		std::string get_first_name() {return first_name;}
// 		std::string get_last_name() {return last_name;}
// 		std::string get_phonephone_num() {return phone_num;}
// 		std::string get_darkdark_secret() {return dark_secret;}
		
// 	private:

// 		std::string first_name;
// 		std::string last_name;
// 		std::string phone_num;
// 		std::string dark_secret;
// };

// class PhoneBook
// {
// 	public:
// 		PhoneBook() : current_size(0) {}
// 		void	add_contact(std::string first_name, std::string last_name,
// 					std::string phone_num, std::string dark_secret)
// 					{
// 						entries[current_size] = Contacts(first_name,
// 						last_name, phone_num, dark_secret);
// 					}

// 	private:
// 		Contacts entries [8];
// 		int	current_size;
// };

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

void do_search()
{
	std::cout << "searching\n";
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
			do_search();
		else if (cmd == "EXIT")
			return 0;
		else
			std::cout << "You gave a wrong command try again\n";
	} while (cmd != "EXIT");
	return 0;
}	
	
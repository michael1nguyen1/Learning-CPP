/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:31:49 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 17:59:30 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contacts
{
	public:
		Contacts() 
		{
			std::cout << "Constructor contacts\n";
		};
		
		Contacts(std::string& first_name, std::string& last_name,
		std::string &phone_num, std::string &dark_secret): first_name(first_name), 
		last_name(last_name), phone_num(phone_num), dark_secret(dark_secret) 
		{
			std::cout << "2nd constructor";
		};
		
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

class PhoneBook
{
	public:
		PhoneBook() : current_size(0) {}
		
		void	add_contact(std::string first_name, std::string last_name,
				std::string phone_num, std::string dark_secret)
		{
			if (current_size < 8)
			{
				entries[current_size] = Contacts(first_name,
				last_name, phone_num, dark_secret);
				current_size++;
			}
			if (current_size == 7)
				current_size = 0;
		}

		std::string formatEntry(const std::string& entry) 
		{
			if (entry.length() > 10)
				return entry.substr(0, 9) + ".";
			else 
				return entry;
		}
		
		void print_contacts()
		{
			for (int i = 0; i < current_size; i++)
			{
				std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_first_name()) << "|";
				std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_last_name()) << "|";
				std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_phonephone_num()) << "|";
				std::cout << std::right << std::setw(10) << formatEntry(entries[i].get_darkdark_secret()) << "|";
			}
    		std::cout << std::endl;
   		}
	private:
		Contacts entries [8];
		int	current_size;
};

#endif // PhoneBook.CPP
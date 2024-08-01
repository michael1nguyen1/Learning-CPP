/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:31:49 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 16:27:48 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

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
						entries[current_size] = Contacts(first_name,
						last_name, phone_num, dark_secret);
					}

	private:
		Contacts entries [8];
		int	current_size;
};

#endif // PhoneBook.CPP
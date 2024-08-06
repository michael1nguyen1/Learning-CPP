/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michael <michael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:31:49 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/06 12:13:10 by michael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Contacts.hpp"

class PhoneBook
{
	public:
		PhoneBook() : current_size(0), max_reached (0) {}
		
		void		add_contact(std::string first_name, std::string last_name, 
						std::string nickname, std::string phone_num, std::string dark_secret);
		std::string formatEntry(const std::string entry);
		void 		print_contacts();
		void 		print_contact(int index);
		int 		get_max_reached() {return max_reached;}
		
	private:
		Contacts entries [8];
		int	current_size;
		int max_reached;
};

int		do_search(PhoneBook &phonebook);
int		do_add(PhoneBook &phonebook);

#endif
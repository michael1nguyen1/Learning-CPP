/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:55 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:19:44 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"

class PhoneBook
{
	public:
		PhoneBook();

		void		add_contact(std::string first_name, std::string last_name, 
						std::string nickname, std::string phone_num, std::string dark_secret);
		std::string formatEntry(const std::string entry);
		void 		print_contacts();
		void 		print_contact(int index);
		int 		get_max_reached();
		
	private:
		Contacts entries [8];
		int	current_size;
		int max_reached;
};

int		do_search(PhoneBook &phonebook);
int		do_add(PhoneBook &phonebook);

#endif
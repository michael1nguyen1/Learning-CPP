/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:49 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:19:41 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contacts
{
	public:
		Contacts();
		
		Contacts(std::string& first_name, std::string& last_name,
		std::string& nickname,std::string &phone_num, std::string &dark_secret);
		
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_dark_secret();
		
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string dark_secret;
};

#endif 
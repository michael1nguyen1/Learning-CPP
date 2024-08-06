/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michael <michael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:42:11 by michael           #+#    #+#             */
/*   Updated: 2024/08/06 12:13:05 by michael          ###   ########.fr       */
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
		Contacts() {};
		
		Contacts(std::string& first_name, std::string& last_name,
		std::string& nickname,std::string &phone_num, std::string &dark_secret)
		: first_name(first_name), last_name(last_name), 
		nickname(nickname), phone_num(phone_num), dark_secret(dark_secret) 
		{};
		
		std::string get_first_name() {return first_name;}
		std::string get_last_name() {return last_name;}
		std::string get_nickname() {return nickname;}
		std::string get_phone_number() {return phone_num;}
		std::string get_dark_secret() {return dark_secret;}
		
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string dark_secret;
};

#endif 
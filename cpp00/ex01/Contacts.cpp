/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:55:46 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:02:45 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Contacts.hpp"

Contacts::Contacts(){}

Contacts::Contacts(std::string& first_name, std::string& last_name,
        std::string& nickname, std::string &phone_num, std::string &dark_secret)
    : first_name(first_name), last_name(last_name), 
      nickname(nickname), phone_num(phone_num), dark_secret(dark_secret){}

std::string Contacts::get_first_name() {
    return first_name;
}

std::string Contacts::get_last_name() {
    return last_name;
}

std::string Contacts::get_nickname() {
    return nickname;
}

std::string Contacts::get_phone_number() {
    return phone_num;
}

std::string Contacts::get_dark_secret() {
    return dark_secret;
}

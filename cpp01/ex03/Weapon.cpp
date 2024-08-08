/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:42:16 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 20:07:16 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Weapon.hpp"

Weapon::Weapon(std::string club) : type(club) {};

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::get_type()
{
	return type;
}
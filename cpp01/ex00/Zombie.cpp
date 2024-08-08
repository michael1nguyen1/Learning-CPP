/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:54:07 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 11:27:38 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie::Zombie (std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}

std::string Zombie::get_name()
{
	return name;
}

void Zombie::announce(void)
{
	if (this->get_name() == "FOO")
		std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << '<' << name << '>' << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

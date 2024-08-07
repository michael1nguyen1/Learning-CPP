/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:54:07 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:59:22 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie::Zombie (std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
	return name;
}
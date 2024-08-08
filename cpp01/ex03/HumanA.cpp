/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:48:47 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 19:51:51 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
		: name(name), weapon(weapon)
{
	
} 

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.get_type() << std::endl;
}
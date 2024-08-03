/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:07:41 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/03 19:52:14 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}

void randomChump(std::string name)
{
	Zombie(name).announce();
}

int main()
{
	randomChump("RON");
	return 0;
}
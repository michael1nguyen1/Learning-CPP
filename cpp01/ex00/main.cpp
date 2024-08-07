/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:59 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 11:59:32 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie(name).announce();
}

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}

int main()
{
    Zombie *Harry;

    Harry = newZombie("Harry");
    Harry->announce();
	randomChump("RON");

    delete Harry;
	return 0;
}
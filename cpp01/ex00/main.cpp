/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:59 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 10:54:00 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "include/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie(name).announce();
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
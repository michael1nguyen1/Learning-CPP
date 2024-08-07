/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michael <michael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:50:58 by michael           #+#    #+#             */
/*   Updated: 2024/08/06 12:57:20 by michael          ###   ########.fr       */
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
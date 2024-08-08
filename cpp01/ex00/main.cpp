/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:53:59 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 11:31:02 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main()
{
    Zombie *harry;
	Zombie *foo;

	randomChump("RON");
	randomChump("FOO");
    harry = newZombie("HARRY");
    harry->announce();
    delete harry;
    foo = newZombie("FOO");
    foo->announce();
	delete foo;
	
	return 0;
}

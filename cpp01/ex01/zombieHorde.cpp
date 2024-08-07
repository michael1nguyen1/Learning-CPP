/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:54:14 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 16:56:52 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *p = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        p[i] = Zombie(name);
    return p;
}

int main()
{	
	Zombie *p;
	int n = 3;
	
	p = zombieHorde(n, "James");
	for (int i = 0; i < n; i++)
		p[i].announce();
	delete[](p);
}
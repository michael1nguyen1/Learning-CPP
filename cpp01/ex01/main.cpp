/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:34:28 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 11:35:26 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main()
{	
	Zombie *p;
	int n = 3;
	
	p = zombieHorde(n, "James");
	for (int i = 0; i < n; i++)
		p[i].announce();
	delete[](p);
}

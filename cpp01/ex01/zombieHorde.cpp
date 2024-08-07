/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:54:14 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 10:54:15 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *p = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        p[i] = Zombie(name);
    }
    return p;
}
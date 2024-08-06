/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michael <michael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:22:05 by michael           #+#    #+#             */
/*   Updated: 2024/08/06 17:18:54 by michael          ###   ########.fr       */
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:50:13 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/07 10:52:07 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	
	public:

	Zombie (std::string name) : name(name) {}
	~Zombie();
	void announce(void);
	std::string get_name() {return name;}
	
	private:
	
	std::string name;
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
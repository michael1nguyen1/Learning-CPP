/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:46:40 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/12 16:03:20 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string);
	void attack();
	void	setWeapon(Weapon&);

	private:
	std::string name;
	Weapon *weapon;
};

#endif
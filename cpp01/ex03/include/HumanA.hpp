/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:46:45 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/12 16:03:07 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string, Weapon&);
	void attack();

	private:
	std::string name;
	Weapon &weapon;
};

#endif
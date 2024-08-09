/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:12:50 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/09 19:12:54 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl
{
	public: 
	void	complain(std::string);

	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	int		check_level(std::string level);
};

enum Level 
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    UNKNOWN
};
#endif
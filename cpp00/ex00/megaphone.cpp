/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:48:17 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/01 21:48:51 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int c, char **v)
{
	if (c > 1)
	{
		for (int i = 1; v[i]; i++)
		{
			std::string str = v[i];
			for (auto &letter : str) 
				letter = std::toupper(letter);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:15:59 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 22:21:57 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/File.hpp"

#include <string>
#include <iostream>

void File::replace(std::string full_line)
{
		std::string str = "hello world";

		std::size_t pos = str.find("hello");
		str.erase(pos, 5);
		str.insert(pos, "what the hell is this");

		std::cout << str << std::endl;
}
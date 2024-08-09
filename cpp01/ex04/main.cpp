/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 21:54:58 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/09 14:31:48 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "include/File.hpp"

int main(int argc, char**argv)
{
	std::string line;
	
	if (argc == 4)
	{
		std::string file = argv[1];
		File in_file(file, std::ios::in);
		in_file.readFromFile();
		in_file.replace(argv[2], argv[3]);
		in_file.writeToFile(file + ".replace");
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	
}
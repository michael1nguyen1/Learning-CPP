/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:15:59 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/09 14:38:56 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/File.hpp"

#include <string>
#include <iostream>

File::File(){}

File::File(std::string &filename, std::ios::openmode mode)
{
	file.open(filename, mode);
}

File::~File()
{
	file.close();
}

void File::replace(std::string old, std::string replace)
{
	std::size_t pos = 0;
	
	while ((pos = content.find(old, pos)) != std::string::npos)
	{
		content.erase(pos, old.length());
		content.insert(pos, replace);
		pos += replace.length();
	}
}

void File::writeToFile(const std::string &newfile)
{
	std::ofstream outfile(newfile);
	if (!outfile) 
	{
        std::cerr << "Error: Could not open or create " << newfile
		<< " for writing." << std::endl;
        return;
    }
	outfile << content;
	outfile.close();
}

void File::readFromFile()
{
	std::string line;

	while (getline(file, line))
	{
		content += line + "\n";
	}
}
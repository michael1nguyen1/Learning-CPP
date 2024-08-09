/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:12:54 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/09 14:45:35 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
#define	FILE_H

#include <string>
#include <fstream>

class File
{
	public:
	
	File(std::string&, std::ios::openmode);
	~File();
	void replace(std::string, std::string);
	void readFromFile();
	void writeToFile(const std::string&);

	
	private:
	
	std::string content;
	std::fstream file;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:12:54 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/08 22:21:01 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
#define	FILE_H

#include <string>

class File
{
	public:

	void replace(std::string);
	
	private:
	std::string full_string;
}

#endif
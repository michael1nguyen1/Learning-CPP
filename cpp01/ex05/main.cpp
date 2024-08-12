/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:12:54 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/12 15:43:50 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("WHATEVER");

    return 0;
}

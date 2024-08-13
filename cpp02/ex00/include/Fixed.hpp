/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:28:46 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/13 22:03:19 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed&);
        Fixed& operator=(const Fixed&);
        ~Fixed();
        int	getRawBits(void);
        void setRawBits(int const raw);

    private:
        int fixed_point;
        static const int frac_bits = 8;
};


#endif
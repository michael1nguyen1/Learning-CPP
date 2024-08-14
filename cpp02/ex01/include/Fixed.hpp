/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:28:46 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/14 13:04:51 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed&);
        Fixed(const int);
        Fixed(const float);
        Fixed& operator=(const Fixed&);
        ~Fixed();
        int	getRawBits(void);
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:
        int fixed_point;
        static const int frac_bits = 8;
};
        std::ostream& operator<<(std::ostream&, const Fixed&);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:28:50 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/14 14:46:35 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(float const value) : fixed_point(roundf(value * (1 << frac_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int raw) : fixed_point(raw << frac_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(fixed_point) / (1 << frac_bits);
}

int Fixed::toInt(void) const
{
    return (fixed_point >> frac_bits);
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->fixed_point = other.fixed_point;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& other) const
{}
bool Fixed::operator<(const Fixed& other) const
{}
bool Fixed::operator>=(const Fixed& other) const
{}
bool Fixed::operator<=(const Fixed& other) const
{}
bool Fixed::operator==(const Fixed& other) const
{}
bool Fixed::operator!=(const Fixed& other) const
{}
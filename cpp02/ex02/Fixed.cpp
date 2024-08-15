/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:28:50 by linhnguy          #+#    #+#             */
/*   Updated: 2024/08/15 16:50:40 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"

Fixed::Fixed() : fixed_point(0){}

Fixed::Fixed(float const value) : fixed_point(roundf(value * (1 << frac_bits))){}

Fixed::Fixed(const int raw) : fixed_point(raw << frac_bits){}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
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
    if (this != &other)
    {
        this->fixed_point = other.fixed_point;
    }
    return *this;
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void)
{
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
{
    return this->fixed_point > other.fixed_point;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->fixed_point < other.fixed_point;
}

bool Fixed::operator>=(const Fixed& other) const
{  
    return this->fixed_point >= other.fixed_point;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->fixed_point <= other.fixed_point;
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->fixed_point == other.fixed_point;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->fixed_point != other.fixed_point;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    
    result.fixed_point = this->fixed_point + other.fixed_point;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    
    result.fixed_point = this->fixed_point - other.fixed_point;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    
    result.fixed_point = (this->fixed_point * other.fixed_point) >> frac_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    
    result.fixed_point = (this->fixed_point << frac_bits) / other.fixed_point;
    return result;
}

Fixed& Fixed::operator++()
{
	this->fixed_point += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed res;

	res = *this;
	this->fixed_point += 1;
	return res;
}

Fixed& Fixed::operator--()
{
	this->fixed_point -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed res;

	res = *this;
	this->fixed_point -= 1;
	return res;	
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}
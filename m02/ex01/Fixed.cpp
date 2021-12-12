/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/12 14:01:26 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed()
{
    std::cout << "outDefault constructor calledCopy" << std::endl;
    this -> setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this -> setRawBits(fixed.fixed_point_val);
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this -> setRawBits(fixed.fixed_point_val);
    return *this;
}

int Fixed::getRawBits(void) const
{
    return (this -> fixed_point_val);
}

void Fixed::setRawBits(int const raw)
{
    this -> fixed_point_val = raw;
}

float Fixed::toFloat(void) const
{
    
}

int Fixed::toInt(void) const
{
    
}

Fixed::Fixed(const int value)
{
    this -> setRawBits(value << number_fractional_bits);
}

Fixed::Fixed(const float value)
{
    this -> setRawBits(roundf(value * (1 << value)));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    out << this -> getRawBits();
    return out;
}
 

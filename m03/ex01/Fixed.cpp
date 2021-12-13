/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/13 11:45:30 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
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
    return (this -> fixed_point_val / 1024.0);
}

int Fixed::toInt(void) const
{
    return (this -> fixed_point_val / 1024);
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this -> setRawBits(value * 1024);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this -> setRawBits(roundf(value * 1024));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
 

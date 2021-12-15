/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/15 16:25:28 by celys            ###   ########.fr       */
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
    std::cout << "Assignation operator called" << std::endl;
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
    return (this -> fixed_point_val / pow(2, this->fractional_bits));
}

int Fixed::toInt(void) const
{
    return (this -> fixed_point_val / pow(2, this->fractional_bits));
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this -> setRawBits(value * pow(2, this->fractional_bits));
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this -> setRawBits(roundf(value * pow(2, this->fractional_bits)));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
 

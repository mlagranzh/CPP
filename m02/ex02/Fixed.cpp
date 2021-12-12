/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/12 12:49:39 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed()
{
    this -> setRawBits(0);
    std::cout << "outDefault constructor calledCopy" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    this -> fixed_point_val = fixed.fixed_point_val;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this -> fixed_point_val = fixed.fixed_point_val;
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

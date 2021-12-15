/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/15 16:50:36 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this -> setRawBits(0);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
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
    return (this -> fixed_point_val / pow(2, this->fractional_bits));
}

int Fixed::toInt(void) const
{
    return (this -> fixed_point_val / pow(2, this->fractional_bits));
}

Fixed::Fixed(const int value)
{
    this -> setRawBits(value * pow(2, this->fractional_bits));
}

Fixed::Fixed(const float value)
{
    this -> setRawBits(roundf(value * pow(2, this->fractional_bits)));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
 
Fixed Fixed::operator+(Fixed fixed)
{
    return Fixed(this -> getRawBits() + fixed.getRawBits());
}

Fixed Fixed::operator-(Fixed fixed)
{
    return Fixed(this -> getRawBits() - fixed.getRawBits());
}

Fixed Fixed::operator*(Fixed fixed)
{
    this -> setRawBits(this -> getRawBits() * fixed.getRawBits() / pow(2, this->fractional_bits));
    return (*this);
}

Fixed Fixed::operator/(Fixed fixed)
{
    return Fixed(this -> getRawBits()  / fixed.getRawBits());
}

bool Fixed::operator>(Fixed fixed) const
{
    if (this -> getRawBits() > fixed.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(Fixed fixed) const
{
    if (this -> getRawBits() < fixed.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(Fixed fixed) const
{
    if (this -> getRawBits() >= fixed.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(Fixed fixed) const
{
    if (this -> getRawBits() <= fixed.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(Fixed fixed) const
{
    if (this -> getRawBits() == fixed.getRawBits())
        return (true);
    return (false);
}
bool Fixed::operator!=(Fixed fixed) const
{
    if (this -> getRawBits() != fixed.getRawBits())
        return (true);
    return (false);
}

Fixed& Fixed::operator++()
{
    this -> setRawBits(this -> getRawBits() + 1);
    return (*this);
}

Fixed& Fixed::operator--()
{
    this -> setRawBits(this -> getRawBits() - 1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);

    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);

    return (temp);
}

 Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

 Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);    
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    return (b);    
}


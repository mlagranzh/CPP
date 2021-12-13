/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/13 15:41:34 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point_val;
        static const int fractional_bits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
    
        Fixed& operator=(const Fixed &fixed);
        friend std::ostream& operator<< (std::ostream &out, const Fixed &fixed);
       
        Fixed operator+(Fixed fixed);
        Fixed operator-(Fixed fixed);
        Fixed operator*(Fixed fixed);
        Fixed operator/(Fixed fixed);

        bool operator>(Fixed fixed) const;
        bool operator<(Fixed fixed) const;
        bool operator>=(Fixed fixed) const;
        bool operator<=(Fixed fixed) const;
        bool operator==(Fixed fixed) const;
        bool operator!=(Fixed fixed) const;

        Fixed& operator++();
        Fixed& operator--();
    
        Fixed operator++(int);
        Fixed operator--(int);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
};

#endif
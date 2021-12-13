/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:27:42 by celys             #+#    #+#             */
/*   Updated: 2021/12/13 18:45:56 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    this -> x.setRawBits(0);
    this -> y.setRawBits(0);
}

Point::~Point()
{
    
}

Point::Point(const Point &point)
{
    
}
Point &Point::operator=(const Point &point)
{
}

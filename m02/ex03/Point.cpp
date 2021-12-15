/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:27:42 by celys             #+#    #+#             */
/*   Updated: 2021/12/15 18:10:55 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    
}

Point::~Point()
{
    
}

Point::Point(float point1, float point2) : x(point1), y(point2)
{
    
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
    
}

Point &Point::operator=(const Point &point)
{
    point.get_X();
    return *this;
}

Fixed Point::get_X() const
{
    return (this -> x);
}

Fixed Point::get_Y() const
{
    return (this -> y);
}

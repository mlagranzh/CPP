/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:27:42 by celys             #+#    #+#             */
/*   Updated: 2021/12/14 21:53:39 by celys            ###   ########.fr       */
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
    point.get_X();
}

Point &Point::operator=(const Point &point)
{
    
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

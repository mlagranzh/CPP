/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:27:42 by celys             #+#    #+#             */
/*   Updated: 2021/12/22 20:06:59 by celys            ###   ########.fr       */
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

Point::Point(const Point &point) : x(point.get_X()), y(point.get_Y())
{
}

Point &Point::operator=(const Point &point)
{
	if (this == &point)
	 	return (*this);	
	new (this) Point(point);
	return (*this);
}

Fixed Point::get_X() const
{
    return (this -> x);
}

Fixed Point::get_Y() const
{
    return (this -> y);
}

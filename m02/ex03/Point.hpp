/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:24:23 by celys             #+#    #+#             */
/*   Updated: 2021/12/14 21:48:44 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        ~Point();
        Point(const Point &point);
        Point(float point1, float point2);
        Point& operator=(const Point &point);
        Fixed get_X() const;
        Fixed get_Y() const;     
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
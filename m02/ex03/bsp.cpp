/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:26:35 by celys             #+#    #+#             */
/*   Updated: 2021/12/15 17:53:56 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float distance(Point const a, Point const b)
{
    float x = b.get_X().toFloat() - a.get_X().toFloat();
    float y = b.get_Y().toFloat() - a.get_Y().toFloat();

    return (sqrt(pow(x, 2) + pow(y, 2)));
}

float square(Point const a, Point const b, Point const c)
{
    float A = distance(a, b);
    float B = distance(a, c);
    float C = distance(b, c);
    float p = (A + B + C) / 2;
    float square = sqrt(p * (p - A) * (p - B) * (p - C));
    
    return (square);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float ABC = square(a, b, c);
    float APC = square(a, point, c);
    float APB = square(a, point, b);
    float BPC = square(b, point, c);
    if ((APC + APB + BPC) == ABC)
        return (true);
    return (false);
}
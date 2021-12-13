/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:24:23 by celys             #+#    #+#             */
/*   Updated: 2021/12/13 18:26:15 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONT_HPP
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
        
};

#endif
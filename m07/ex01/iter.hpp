/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 05:10:24 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 06:14:26 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <math.h>
#include <cstring>

template <typename T1, typename T2>
void iter(T1* array, T2 length, void function(T1 element))
{
    for (int i = 0; i < length; i++)
        function(array[i]);
}

#endif
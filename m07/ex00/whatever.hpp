/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2022/01/03 17:38:23 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
T min(T a, T b)
{
    if (a < b) return a;
    return b;
}

template <typename T>
T max(T a, T b)
{
    if (a > b) return a;
    return b;
}

template <typename T>
void swap(T& a, T& b)
{
    T c = a;
    a = b;
    b = c;
}

#endif
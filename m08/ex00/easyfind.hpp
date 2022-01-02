/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 08:18:52 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
# include <list>

template<typename T>
int easyfind(T a, int number)
{
    int i = 0;
    typename T::iterator it;
    for (it = a.begin(); it != a.end(); ++it)
    {
        if (number == *it)
            return i;
        i++;
    }
    throw std::logic_error("NOT FOUND");
}


#endif
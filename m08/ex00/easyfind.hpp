/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2022/01/04 15:00:36 by celys            ###   ########.fr       */
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
    typename T::iterator it;
    it = std::find(a.begin(), a.end(), number);
	if (it == a.end())
		throw std::logic_error("NOT FOUND");
	return std::distance(a.begin(), it);
}


#endif
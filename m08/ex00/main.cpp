/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 04:44:59 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 08:19:39 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int vv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    std::vector<int> v(&vv[0], &vv[0]+sizeof(vv)/sizeof(vv[0]));
    try
    {
        std::cout << easyfind(v, 2) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::list<int> l(&vv[0], &vv[0]+sizeof(vv)/sizeof(vv[0]));
    try
    {
        std::cout << easyfind(l, 20) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
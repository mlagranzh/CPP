/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/22 20:08:41 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) 
{
    Point A(1.2, 3.4);
    Point B(3.2, 5.4);
    Point C(10.2, 3.4);
    std::cout << "Point A(1.2, 3.4)" << std::endl;
    std::cout << "Point B(3.2, 5.4)" << std::endl;
    std::cout << "Point C(10.2, 3.4)" << std::endl;
    
    Point p1(3.2,4.4);
    std::cout << "Point p1(3.2,4.4)" << std::endl;
    if (bsp(A, B, C, p1))
        std::cout << "In a triangle" << std::endl;
    else
        std::cout << "Out of a triangle" << std::endl;
    
    Point p2(100.3, 3.3);
    std::cout << "Point p2(100.3, 3.3)" << std::endl;
    if (bsp(A, B, C, p2) == true)
        std::cout << "In a triangle" << std::endl;
    else
        std::cout << "Out of a triangle" << std::endl;
    return (0);
}
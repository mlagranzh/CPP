/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/14 21:55:00 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) 
{
    Point A(1.2, 3.4);
    Point B(4.2, 3.4);
    Point C(10.2, 3.4);

    Point p(1.3, 3.3);
    if (bsp(A, B, C, p))
        std::cout << "TRUE" << std::endl;
    else
        std::cout << "False" << std::endl;
    
    Point p(100.3, 3.3);
    if (bsp(A, B, C, p))
        std::cout << "TRUE" << std::endl;
    else
        std::cout << "False" << std::endl;

    return 0;
}
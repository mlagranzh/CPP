/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 14:19:29 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;
    std::vector<int> v(1000);
    srand (time(NULL));
    for (int i = 0; i < 1000; i++)
        v[i] = rand();
        

    Span sp2 = Span(1000);

    try
    {
        sp2.addNumber(v.begin(), v.end());
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "********************************" << std::endl;
    Span sp3 = Span(123);

    try
    {
        sp3.addNumber(5);
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "********************************" << std::endl;
    Span sp4 = Span(1);

    try
    {
        sp4.addNumber(5);
        sp4.addNumber(5);
        std::cout << sp4.shortestSpan() << std::endl;
        std::cout << sp4.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
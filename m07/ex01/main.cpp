/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 06:17:41 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_upper(char a)
{
    putchar(toupper(a));
}

void print_pow_2(int a)
{
    std::cout << a * a << std::endl;
}

int main()
{
    char *a = (char *)"foo bar";
    ::iter(a, 13, print_upper);
    std::cout << std::endl;

    int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *c = new int[10];
    std::memcpy(c, &b, sizeof(b));
    ::iter(c, 10, print_pow_2);
    delete[] c;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 04:17:50 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "NEED 2 ARGUMENTS!" << std::endl;
        return (0);
    }
    char ch;
    int a;
    float f;
    double d;
    
    ch = (argv[1])[0];
    a = std::stoi(argv[1]);
    f = std::stof(argv[1]);
    d = std::stod(argv[1]);
    std::cout << ch << std::endl;
    std::cout << a << std::endl;
    std::cout << f << std::endl;
    std::cout << d << std::endl;

    return (0);
}
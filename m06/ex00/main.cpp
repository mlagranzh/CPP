/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 13:42:40 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarСonversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "NEED ARGUMENTS!" << std::endl;
        return (0);
    }
    std::string str(argv[1]);
    if (str.empty())
    {
        std::cout << "EMPTY!" << std::endl;
        return (0);
    }

    ScalarСonversion string(str);
    string.print_char();
    string.print_int();
    string.print_float();
    string.print_double();    
    return (0);
}
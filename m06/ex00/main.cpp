/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/30 20:32:57 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarСonversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "NEED 2 ARGUMENTS!" << std::endl;
        return (0);
    }
    std::string str(argv[1]);
    if (str.empty())
    {
        std::cout << "EMPTY!" << std::endl;
        return (0);
    }

    
    char ch;
    int a;
    float f;
    double d;
    if (str == "-inf" || str == "+inf")
    {
        
    }
    
    double n = static_cast<double>(str);
    ch = std::stoi(str);
    a = static_cast<int>(std::stoi(str));
    f = static_cast<float>(std::stof(str));
    d = std::stod(str);
    std::cout << ch << std::endl;
    std::cout << a << std::endl;
    std::cout << f << std::endl;
    std::cout << d << std::endl;

    return (0);
}
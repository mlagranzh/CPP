/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/10 11:11:51 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "PLEASE! ME NEED <LOG LEVEL>" << std::endl;
        exit(1);
    }
    
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string *result= std::find(std::begin(array), std::end(array), argv[1]);
    int pos = std::distance(array, result);
    
    Karen karen;
    switch(pos)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("DEBUG");
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("INFO");
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("WARNING");
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
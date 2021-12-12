/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/11 15:48:28 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string my_str = "HI THIS IS BRAIN";
    std::string *stringPTR = &my_str;
    std::string &stringREF = my_str;

    std::cout << "my_str: " << &my_str << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;
    
    std::cout << "string using PTR: " << *stringPTR << std::endl;
    std::cout << "string using REF: " << stringREF << std::endl;

    stringREF = "dfdfgfdgfddfgdfgfd";
    std::cout << "string using REF: " << &my_str << std::endl;
}
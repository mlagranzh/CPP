/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarСonversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/31 07:09:52 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarСonversion.hpp"

ScalarСonversion::ScalarСonversion()
{
    
}

ScalarСonversion::~ScalarСonversion()
{
    
}

ScalarСonversion::ScalarСonversion(std::string string)
{
    // int i = -1;
    // if (!(string == "+inf" || string == "-inf" || \
    //          string == "inf" || string == "nan"))
    // {
    //     while (string[++i])
    //     {
    //         if (string[i] == '.')
    //             break;
    //         if (!isdigit(string[i]))
    //             throw std::invalid_argument("STRING");
    //     }
    // }
    this -> string = string;
}

ScalarСonversion::ScalarСonversion::operator double() const
{
    double d;
    
    d  = std::stod(this -> string);
    return (d);
}

ScalarСonversion::ScalarСonversion::operator int() const
{
    int i;
    
    i  = std::stoi(this -> string);
    return (i);
}

ScalarСonversion::ScalarСonversion::operator float() const
{
    float f;
    
    f  = std::stof(this -> string);
    return (f);
}

ScalarСonversion::operator char() const
{
    char ch;
    
    if (string.size() == 1)
        return (string[0]);
    ch = std::stoi(this -> string);
    if (ch < 32 || ch > 127)
        throw "Non displayable";
    return (ch);
}

void ScalarСonversion::print_char() const
{
    std::cout << "char: ";
    try
    {
        char c = static_cast<char>(*this);
        std::cout << "'" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch(const char*)
    {
        std::cout << "Non displayable" << std::endl;
    }
}

void ScalarСonversion::print_float() const
{
    std::cout << "float: ";
    try
    {
        std::cout.precision(1);
        float f = static_cast<float>(*this);
        std::cout << std::fixed << f << "f" <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }   
}

void ScalarСonversion::print_double() const
{
    std::cout << "double: ";
    try
    {
        double d = static_cast<double>(*this);
        std::cout << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void ScalarСonversion::print_int() const
{
    std::cout << "int: ";
    try
    {
        int i = static_cast<int>(*this);
        std::cout << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}
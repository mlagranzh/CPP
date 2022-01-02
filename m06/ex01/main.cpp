/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/31 07:25:50 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data 
{
    int number;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *ptr;
    ptr = new Data;
    
    std::cout << ptr << std::endl;
    std::cout << serialize(ptr) << std::endl;
    std::cout << deserialize(serialize(ptr)) << std::endl;

    delete ptr;
    
    return (0);
}
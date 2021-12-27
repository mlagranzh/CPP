/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 17:23:34 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Cat a1;
    std::cout << a1.get_Brain() << std::endl;
    a1.makeSound();
    std::cout << "************************************" << std::endl; 
    Dog b1;
    std::cout << b1.get_Brain() << std::endl;
    b1.makeSound();
    std::cout << "************************************" << std::endl;
 //   Animal C;
    return (0);
}
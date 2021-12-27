/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 06:14:27 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Cat a1;
    {
        Cat a2 = a1;
    }
    a1.get_Brain();
    
    std::cout << "************************************" << std::endl; 
    Dog b1;
    {
        Dog b2(b1);
    }
    b1.get_Brain();
    std::cout << "************************************" << std::endl;
    Animal *C[10];
    for (int i = 0; i < 5; i++)
        C[i] = new Cat();
    for (int i = 5; i < 10; i++)
        C[i] = new Dog();
    std::cout << "************************************" << std::endl;
    
    for (int i = 0; i < 10; i++)
        C[i]->makeSound();
    std::cout << "************************************" << std::endl;  
    
    for (int i = 0; i < 10; i++)
        delete C[i];
    std::cout << "************************************" << std::endl;

    const Animal* j = new Dog();
    const Animal *i = new Cat();
    delete j;//should not create a leak
    delete i;
}
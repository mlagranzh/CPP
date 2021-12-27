/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 19:14:34 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[Animal] : Default Constructor called" << std::endl;
    set_type("no type");
}

Animal::~Animal()
{
    std::cout << "[Animal] : Destructor called" << std::endl;
}

Animal::Animal(const Animal &Animal)
{
    std::cout << "[Animal] : Copy constructor called" << std::endl;
    this -> set_type(Animal.get_type());
}

Animal &Animal::operator=(const Animal &Animal)
{
    this -> set_type(Animal.get_type());
    return (*this);
}

std::string Animal::get_type(void) const
{
   return (this -> type);
}

void Animal::set_type(std::string string)
{
    this -> type = string;
}

void Animal::makeSound() const
{
    std::cout << "no sound" << std::endl;
}
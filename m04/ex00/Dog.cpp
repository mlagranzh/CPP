/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 19:21:24 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] : Default Constructor called" << std::endl;
    set_type("DOOOOG");
}

Dog::~Dog()
{
    std::cout << "[Dog] : Destructor called" << std::endl;
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "[Dog] : Copy constructor called" << std::endl;
    this -> set_type(Dog.get_type());
}

Dog &Dog::operator=(const Dog &Dog)
{
    this -> set_type(Dog.get_type());
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "gaffff" << std::endl;
}
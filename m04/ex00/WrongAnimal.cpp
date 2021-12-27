/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 18:48:30 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[WrongAnimal] : Default Constructor called" << std::endl;
    set_type("no type");
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] : Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "[WrongAnimal] : Copy constructor called" << std::endl;
    this -> set_type(WrongAnimal.get_type());
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    this -> set_type(WrongAnimal.get_type());
    return (*this);
}

std::string WrongAnimal::get_type(void) const
{
   return (this -> type);
}

void WrongAnimal::set_type(std::string string)
{
    this -> type = string;
}

void WrongAnimal::makeSound() const
{
    std::cout << "no sound" << std::endl;
}
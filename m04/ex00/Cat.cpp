/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 19:16:59 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] : Default Constructor called" << std::endl;
    set_type("CAAATT");
}

Cat::~Cat()
{
    std::cout << "[Cat] : Destructor called" << std::endl;
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "[Cat] : Copy constructor called" << std::endl;
    this -> set_type(Cat.get_type());
}

Cat &Cat::operator=(const Cat &Cat)
{
    this -> set_type(Cat.get_type());
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meauuu" << std::endl;
}
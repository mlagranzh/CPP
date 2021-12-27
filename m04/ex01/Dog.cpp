/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 19:32:12 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] Default constructor called" << std::endl;
    set_type("DOOOOG");
    this -> brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
    delete this -> brain;
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
    this -> set_type(Dog.get_type());
    
    this -> brain = new Brain;
    delete[] this -> get_Brain() -> get_ideas();
    
    std::string *ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = Dog.get_Brain() -> get_ideas()[i];
    this -> get_Brain() -> set_ideas(ideas);
}

Dog &Dog::operator=(const Dog &Dog)
{
    this -> set_type(Dog.get_type());

    delete[] this -> get_Brain() -> get_ideas();

    std::string *ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = Dog.get_Brain() -> get_ideas()[i];
    this -> get_Brain() -> set_ideas(ideas);

    return *this;
}

Brain*  Dog::get_Brain() const
{
    return (this -> brain);
}

void    Dog::set_Brain(Brain *Brain)
{
    this -> brain = Brain;
}

void Dog::makeSound() const
{
    std::cout << "gaffff" << std::endl;
}
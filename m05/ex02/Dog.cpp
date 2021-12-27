/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 17:21:16 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    set_type("DOOOOG");
    this -> brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor called" << std::endl;
    delete this -> brain;
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "Copy constructor called" << std::endl;
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
    std::cout << "Assignation operator called" << std::endl;
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

void Dog::makeSound()
{
    std::cout << this -> get_type() << std::endl;
}

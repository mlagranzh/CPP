/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 17:21:48 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Cat called" << std::endl;
    set_type("CAAATT");
    this -> brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    delete this -> get_Brain();
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Copy constructor called" << std::endl;
    this -> set_type(Cat.get_type());
    
    this -> brain = new Brain;
    delete[] this -> get_Brain() -> get_ideas();
    
    std::string *ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = Cat.get_Brain() -> get_ideas()[i];
    this -> get_Brain() -> set_ideas(ideas);
}

Cat &Cat::operator=(const Cat &Cat)
{
    std::cout << "Assignation operator called" << std::endl;
    this -> set_type(Cat.get_type());

    delete[] this -> get_Brain() -> get_ideas();

    std::string *ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = Cat.get_Brain() -> get_ideas()[i];
    this -> get_Brain() -> set_ideas(ideas);

    return *this;
}

Brain*  Cat::get_Brain() const
{
    return (this -> brain);
}

void    Cat::set_Brain(Brain *Brain)
{
    this -> brain = Brain;
}

void Cat::makeSound()
{
    std::cout << this -> get_type() << std::endl;
}

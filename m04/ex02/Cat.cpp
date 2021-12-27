/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 19:27:01 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] Constructor Cat called" << std::endl;
    set_type("CAAATT");
    this -> brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor Cat called" << std::endl;
    delete this -> get_Brain();
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "[Cat] Copy Constructor called" << std::endl;
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

void Cat::makeSound() const
{
    std::cout << "meauuu" << std::endl;
}
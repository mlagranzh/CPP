/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 04:54:45 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor called" << std::endl;
    std::string *ideas = new std::string[100];
    this -> set_ideas(ideas);
}

Brain::~Brain()
{
    std::cout << "Destructor called" << std::endl;
    delete[] this -> get_ideas();
}

Brain::Brain(const Brain &Brain)
{
    std::cout << "Copy constructor called" << std::endl;
    std::string *ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = Brain.ideas[i];
    this -> set_ideas(ideas);
}

Brain &Brain::operator=(const Brain &Brain)
{
    std::string *ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = Brain.ideas[i];
    this -> set_ideas(ideas);
    return *this;
}

std::string *Brain::get_ideas(void) const
{
   return (this -> ideas);
}

void Brain::set_ideas(std::string *string)
{
    this -> ideas = string;
}
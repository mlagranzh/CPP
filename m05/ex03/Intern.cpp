/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/30 00:10:12 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern &intern)
{
    (void) intern;
}

Intern& Intern::operator=(const Intern &form)
{
	if (this == &form)
		return (*this);
	return (*this);
}

Form *Intern::makeForm(std::string name_form, std::string target)
{
    std::string formTypes[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
    Form* form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target) };
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if (formTypes[i] == name_form)
        {
            std::cout << "Intern creates " << *form[i] << " to the standard output" << std::endl;
            break;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (j != i)
            delete form[j];
    }
    if (i != 3)
        return (form[i]);
    else
        throw Intern::UnknownType(name_form);
}

Intern::UnknownType::UnknownType (std::string name) : _name(name)
{
}

Intern::UnknownType::UnknownType()
{
}

Intern::UnknownType::~UnknownType() throw() 
{
}

std::string Intern::UnknownType::error_type() const throw()
{
    std::string output = "Type: " + this -> _name + " not found";
    return (output);
}


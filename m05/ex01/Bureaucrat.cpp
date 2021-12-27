/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 04:46:47 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
    this -> set_grade(0);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException(this -> get_name());
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException(this -> get_name());
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
        return ;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
        return ;
    }
    this -> set_grade(grade);
}

Bureaucrat::~Bureaucrat()
{
    
}

std::string	Bureaucrat::get_name(void) const
{
    return (this -> _name);
}

int		Bureaucrat::get_grade(void) const
{
    return (this -> _grade);
}
void	Bureaucrat::set_grade(int grade)
{
    this -> _grade = grade;
}

void	Bureaucrat::grade_low()
{
    try
    {
        if (this -> get_grade() - 1 < 1)
            throw Bureaucrat::GradeTooHighException(this -> get_name());
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
        return ;
    }
    this -> set_grade(this->get_grade() - 1);
}

void	Bureaucrat::grade_high()
{
    try
    {
        if (this -> get_grade() + 1 > 150)
            throw Bureaucrat::GradeTooLowException(this -> get_name());
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    this -> set_grade(this->get_grade() + 1);

}

Bureaucrat::GradeTooHighException::GradeTooHighException (std::string name) : _name(name)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException (std::string name) : _name(name)
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Value Too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Value Too Low!");
}

std::string Bureaucrat::GradeTooLowException::who() const throw()
{
    return (this -> _name);
}

std::string Bureaucrat::GradeTooHighException::who() const throw()
{
    return (this -> _name);
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade() << ".";
    return (out);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 23:18:05 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
    this -> set_grade(0);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException(this -> get_name());
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException(this -> get_name());
    this -> set_grade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat.get_name()), _grade(bureaucrat.get_grade())
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this == &bureaucrat)
		return (*this);
    this -> set_grade(bureaucrat.get_grade());
	return (*this);
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

void	Bureaucrat::grade_dicrement()
{
    if (this -> get_grade() - 1 < 1)
        throw Bureaucrat::GradeTooHighException(this -> get_name());
    this -> set_grade(this->get_grade() - 1);
}

void	Bureaucrat::grade_increment()
{
    if (this -> get_grade() + 1 > 150)
        throw Bureaucrat::GradeTooLowException(this -> get_name());
    this -> set_grade(this->get_grade() + 1);
}

void Bureaucrat::signForm(Form &form)
{
    if (form.get_signed())
        std::cout << *this << "He can sign " << form << std::endl;
    else
    {
        std::cout << *this << "He cannot sign " << form << " because:" << std::endl;
        throw Bureaucrat::GradeTooLowException(this -> get_name());
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException (std::string name) : _name(name)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException (std::string name) : _name(name)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() 
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() 
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

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.get_name() << " bureaucrat has grade " << bureaucrat.get_grade() << ".";
    return (out);
}
void Bureaucrat::executeForm(Form const & form)
{
    std::cout << *this << " executes " << form << std::endl;
    form.execute(*this);
}

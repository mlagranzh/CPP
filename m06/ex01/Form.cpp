/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 02:03:28 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form() : _grade_sign(), _grade_execute(), _signed(0), _name()
// {
    
// }

Form::Form(std::string name, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
    this -> set_signed(0);
    if (grade_sign < 1 || grade_execute < 1)
        throw Bureaucrat::GradeTooHighException(this -> get_name());
    if (grade_sign > 150 || grade_execute > 150)
        throw Bureaucrat::GradeTooLowException(this -> get_name());
}

Form::~Form()
{
    
}

// Form::Form(const Form &form) : _grade_sign(form.get_grade_sign()), _grade_execute(form.get_grade_execute()), _signed(0), _name(form.get_name())
// {
    
// }

Form& Form::operator=(const Form &form)
{
	if (this == &form)
		return (*this);
	this->_signed = form._signed;
	return (*this);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.get_grade() < this -> get_grade_sign())
        this -> set_signed(1);
}

void Form::signForm(Form &form)
{
    if (form.get_signed())
        std::cout << *this << " signs " << form << std::endl;
    else
        std::cout << *this << " cannot sign " << form << " because " << "<reason" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
    out << "{NAME} " << form.get_name() << " {grade_execute} " << form.get_grade_execute() << " {grade_sign} " << form.get_grade_sign() << " {signed} " << form.get_signed() ;
    return (out);
}

Form::GradeTooHighException::GradeTooHighException(std::string name) : _name(name)
{
    
}

Form::GradeTooLowException::GradeTooLowException(std::string name) : _name(name)
{
    
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Value Too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Value Too Low!");
}

std::string Form::GradeTooLowException::who() const throw()
{
    return (this -> _name);
}

std::string Form::GradeTooHighException::who() const throw()
{
    return (this -> _name);
}

std::string	Form::get_name(void) const
{
    return (this -> _name);
}

int	Form::get_grade_sign(void) const
{
    return (this -> _grade_sign);
}

int	Form::get_grade_execute(void) const
{
    return (this -> _grade_execute);
}

bool	Form::get_signed(void) const
{
    return (this -> _signed);
}

void	Form::set_signed(bool _signed)
{
    this -> _signed = _signed;
}

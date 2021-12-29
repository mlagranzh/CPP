/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 01:51:48 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Form::Form() : _grade_sign(), _grade_execute(), _signed(0), _name()
// {
    
// }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
    this -> set_signed(0);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this -> get_signed() || executor.get_grade() > 5)
        throw Form::GradeTooLowException(this -> get_name());
    std::cout << this -> get_target() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

// Form::Form(const Form &form) : _grade_sign(form.get_grade_sign()), _grade_execute(form.get_grade_execute()), _signed(0), _name(form.get_name())
// {
    
// }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	if (this == &form)
		return (*this);
	return (*this);
}
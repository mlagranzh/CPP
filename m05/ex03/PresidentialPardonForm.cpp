/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 11:43:35 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
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

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form)
{
    this -> set_signed(form.get_signed());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	if (this == &form)
		return (*this);
    this -> set_signed(form.get_signed());
	return (*this);
}
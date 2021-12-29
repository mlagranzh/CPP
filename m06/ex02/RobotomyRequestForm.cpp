/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 01:52:00 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
    this -> set_target(target);
    this -> set_signed(0);
}

RobotomyRequestForm::RobotomyRequestForm()
{
    this -> set_signed(0);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this -> get_signed() || executor.get_grade() >= 45)
        throw Form::GradeTooLowException(this -> get_name());
    std::cout << "ROOOOOOBOOOOOO " <<  this -> get_target() << " has been robotomized successfully 50% of the time." << std::endl;
}

// Form::Form(const Form &form) : _grade_sign(form.get_grade_sign()), _grade_execute(form.get_grade_execute()), _signed(0), _name(form.get_name())
// {
    
// }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	if (this == &form)
		return (*this);
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 23:34:01 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 25, 5)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 25, 5)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{   
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
{
    this -> set_signed(form.get_signed());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	if (this == &form)
		return (*this);
    this -> set_signed(form.get_signed());
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this -> get_signed() || executor.get_grade() >= 45)
        throw Form::GradeTooLowException(this -> get_name());
    std::cout << "ROOOOOOBOOOOOO " <<  this -> get_target() << " has been robotomized successfully 50% of the time." << std::endl;
}
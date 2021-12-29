/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 02:08:03 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Form::Form() : _grade_sign(), _grade_execute(), _signed(0), _name()
// {
    
// }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
    this -> set_signed(0);
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
    this -> set_signed(0);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
// {
    
// }

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!(this -> get_signed()) || executor.get_grade() >= 137)
    {
        throw Form::GradeTooLowException(this -> get_name());
        return ;
    }
    std::ofstream out(this -> get_target() + "_shrubbery");
    out << "          .     .  .      +     .      .          ." << std::endl;
    out << "     .       .      .     #       .           ." << std::endl;
    out << "        .      .         ###            .      .      ." << std::endl;
    out << "      .      .   '#:. .:##'##:. .:#'  .      ." << std::endl;
    out << "          .      . '####'###'####'  .           " << std::endl;
    out << "       .     '#:.    .:#'###'#:.    .:#'  .        .       ." << std::endl;
    out << "  .             '#########'#########'        .        ." << std::endl;
    out << "        .    '#:.  '####'###'####'  .:#'   .       ." << std::endl;
    out << "     .     .  '#######''##'##''#######'                  ." << std::endl;
    out << "                .'##'#####'#####'##'           .      ." << std::endl;
    out << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     ." << std::endl;
    out << "      .     '#######'##'#####'##'#######'      .     ." << std::endl;
    out << "    .    .     '#####''#######''#####'    .      ." << std::endl;
    out << "            .     '      000      '    .     ." << std::endl;
    out << "       .         .   .   000     .        .       ." << std::endl;
    out << ".. .. ..................O000O........................ ...... ..." << std::endl;
}

// Form::Form(const Form &form) : _grade_sign(form.get_grade_sign()), _grade_execute(form.get_grade_execute()), _signed(0), _name(form.get_name())
// {
    
// }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this == &form)
		return (*this);
	return (*this);
}
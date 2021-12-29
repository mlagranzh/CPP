/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:50 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 23:33:49 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 25, 5)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 25, 5)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{   
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
{
    this -> set_signed(form.get_signed());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
	if (this == &form)
		return (*this);
    this -> set_signed(form.get_signed());
	return (*this);
}

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
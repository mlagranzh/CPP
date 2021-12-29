/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 01:22:58 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBEERYCREATIONFORM
# define SHRUBEERYCREATIONFORM

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &form);
        void execute(Bureaucrat const & executor) const;
};

#endif
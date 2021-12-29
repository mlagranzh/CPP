/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/30 00:05:27 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Form;

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &intern);
        Intern& operator=(const Intern &intern);
        void execute(Bureaucrat const & executor) const;
        Form *makeForm(std::string form, std::string target);
        
        class UnknownType : public std::exception
		{
			private:
				std::string _name;
			public:
				UnknownType();
				virtual ~UnknownType() throw();
				UnknownType(std::string name);
				std::string error_type() const throw();
		};	

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 23:17:57 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Form;
#include "Form.hpp"

class Bureaucrat
{
    private:
        std::string const _name;
        int				  _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat& operator=(const Bureaucrat &bureaucrat);

		void signForm(Form &form);
		void executeForm(Form const & form);

		std::string	get_name(void) const;
		int		get_grade(void) const;
		void	set_grade(int grade);

		void	grade_increment();
		void	grade_dicrement();
		
		class GradeTooHighException : std::exception
		{
			private:
				std::string _name;
			public:
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				GradeTooHighException(std::string name);
				const char *what() const throw();
				std::string who() const throw();
		};

		class GradeTooLowException : std::exception
		{
			private:
				std::string _name;
			public:
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				GradeTooLowException(std::string name);
				const char *what() const throw();
				std::string who() const throw();
		};
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
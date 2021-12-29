/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 00:13:23 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#include "Form.hpp"
class Form;

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
		void executeForm(Form const & form);
		void signForm(Form const &form);

		std::string	get_name(void) const;
		int		get_grade(void) const;
		void	set_grade(int grade);

		void	grade_high();
		void	grade_low();
		
		class GradeTooHighException
		{
			private:
				std::string _name;
			public:
				GradeTooHighException();
				GradeTooHighException(std::string name);
				const char *what() const throw(); //why throw virtual??
				std::string who() const throw(); //why throw
		};

		class GradeTooLowException
		{
			private:
				std::string _name;
			public:
				GradeTooLowException();
				GradeTooLowException(std::string name);
				const char *what() const throw(); //why throw
				std::string who() const throw(); //why throw
		};

};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
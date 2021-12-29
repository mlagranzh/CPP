/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 00:10:09 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool        	_signed;
        const int		_grade_sign;
		const int		_grade_execute;
    public:
        Form();
		Form(std::string name, int	grade_sign, int	grade_execute);
        ~Form();
		Form(const Form &form);
        Form& operator=(const Form &form);
		void beSigned(Bureaucrat &bureaucrat);
		
		std::string	get_name(void) const;
		int		get_grade_sign(void) const;
		int		get_grade_execute(void) const;
		bool	get_signed(void) const;
		void	set_signed(bool _signed);
		
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

std::ostream& operator<<(std::ostream &out, const Form &form);

#endif
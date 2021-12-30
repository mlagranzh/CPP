/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarСonversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/30 20:43:12 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarСonversion_HPP
# define ScalarСonversion_HPP

#include <iostream>

class ScalarСonversion
{
    private:
        std::string const string;
    public:
        ScalarСonversion();
        ~ScalarСonversion();
		ScalarСonversion(std::string string);
		ScalarСonversion(const ScalarСonversion &scalar);
        ScalarСonversion& operator=(const ScalarСonversion &scalar);

		double to_Double();
		int to_Int();
		float to_Float();
		char to_Char();

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
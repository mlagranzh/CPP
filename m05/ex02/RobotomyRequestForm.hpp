/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:52:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 01:25:36 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &form);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &form);
        void execute(Bureaucrat const & executor) const;
};

#endif
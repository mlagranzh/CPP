/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 02:59:42 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  *karina = new Bureaucrat("Karina", 146);
        Bureaucrat  *pavel = new Bureaucrat("Pavel", 100);
        Form        *trees = new ShrubberyCreationForm("Vanya");

        std::cout << std::endl;
        std::cout << *trees << std::endl;;
        std::cout << *karina << std::endl;;
        karina->signForm(*trees);
        std::cout << *pavel << std::endl;;
        pavel->signForm(*trees);
        std::cout << *trees << std::endl;;

        std::cout << std::endl;
        karina->executeForm(*trees);
        pavel->executeForm(*trees);
        std::cout << std::endl;
        RobotomyRequestForm     *robot_form = new RobotomyRequestForm("Carl");
        while (karina->get_grade() > 40)
            karina->grade_high();
        std::cout << *robot_form << std::endl;
        std::cout << *karina << std::endl;
        karina->signForm(*robot_form);
        std::cout << *pavel << std::endl;
        pavel->executeForm(*robot_form);
        karina->executeForm(*robot_form);

        std::cout << std::endl;
        PresidentialPardonForm  *pres_form = new PresidentialPardonForm("Jim");
        while (pavel->get_grade() > 4)
            pavel->grade_high();
        std::cout << *pres_form << std::endl;;
        std::cout << *pavel << std::endl;;
        pavel->signForm(*pres_form);
        karina->executeForm(*pres_form);
        pavel->executeForm(*pres_form);

        delete pres_form;
        delete robot_form;
        delete pavel;
        delete karina;
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }   
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    return (0);
}
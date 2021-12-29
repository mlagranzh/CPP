/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/30 00:19:43 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  *tom = new Bureaucrat("Tom", 146);
    Bureaucrat  *john = new Bureaucrat("John", 100);
    Form        *forma = new ShrubberyCreationForm("forma");
    
    std::cout << *forma << std::endl;;
    std::cout << *tom << std::endl;;
    std::cout << *john << std::endl;;
    try
    {
        tom->signForm(*forma);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    std::cout << *tom << std::endl;;

    try
    {
        john->signForm(*forma);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }   
    std::cout << "************************" << std::endl;
    
    try
    {
        tom->executeForm(*forma);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        john->executeForm(*forma);
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }   
    std::cout << "************************" << std::endl;
    
    RobotomyRequestForm     *robot_form = new RobotomyRequestForm("Carl");
    try
    {
        while (tom->get_grade() > 40)
            tom->grade_increment();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    
    std::cout << *robot_form << std::endl;
    std::cout << *tom << std::endl;
    try
    {
        tom->signForm(*robot_form);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    std::cout << *john << std::endl;
    try
    {
        john->executeForm(*robot_form);
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }   
    try
    {
        tom->executeForm(*robot_form);
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }   
    std::cout << "************************" << std::endl;

    delete robot_form;
    delete john;
    delete forma;
    delete tom;
    return (0);
}
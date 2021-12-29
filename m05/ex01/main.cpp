/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 23:14:04 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a;
    Bureaucrat b("Nick", 8);
    try
    {
        Bureaucrat c("Pingwi", 1000);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d("Steeve", -1);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;    
    
    Bureaucrat e("Tom", 150);
    try
    {
        e.grade_increment();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    Bureaucrat f("Peter", 1);
    try
    {
        f.grade_dicrement();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    try
    {
        Form forma("FORMA", 200, 200);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    Form forma1("FORMA", 10, 150);
    Form forma2("FORMA", 5, 150);
    forma1.beSigned(b);
    b.signForm(forma1);
    
    forma2.beSigned(b);
    try
    {
        b.signForm(forma2);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
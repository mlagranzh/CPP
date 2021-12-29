/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 22:44:45 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a;
    Bureaucrat b("Nick", 10);
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
        e.grade_dicrement();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    Bureaucrat f("Peter", 1);
    try
    {
        f.grade_increment();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
    }
    return (0);
}
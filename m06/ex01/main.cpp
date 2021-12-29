/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/29 02:04:57 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a;
        Bureaucrat b("Nick", 10);
        Bureaucrat c("Pingwi", 1000);;
        Bureaucrat d("Steeve", -1);;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << d << std::endl;
        
        Bureaucrat e("Tom", 150);
        e.grade_high();
        Bureaucrat f("Peter", 1);
        f.grade_low();
    }    
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
        return ;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.who() << ": " << e.what() << std::endl;
        return ;
    }   
    
    return (0);
}
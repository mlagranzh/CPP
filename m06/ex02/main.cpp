/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/31 07:53:12 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base *generate(void)
{
    Base *array[3] = {new A(), new B(), new C()};
    int number = rand() % 3;
    for (int i = 0; i < 3; i++)
    {
        if (i != number)
            delete array[i];
    }
    return (array[number]);
}

void identify(Base* p)
{
    try
    {
        A& a = dynamic_cast<A&>(*p);
        std::cerr << "This is class A" << '\n';
        (void) a;
    }
    catch(const std::exception& e)
    {
    }    

    try
    {
        B& a = dynamic_cast<B&>(*p);
        std::cerr << "This is class B" << '\n';
        (void) a;
    }
    catch(const std::exception& e)
    {
    }    

    try
    {
        C& a = dynamic_cast<C&>(*p);
        std::cerr << "This is class C" << '\n';
        (void) a;
    }
    catch(const std::exception& e)
    {
    }    
}

int main()
{
    Base *ptr;
    ptr = generate();
    identify(ptr);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 15:51:46 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base *generate(void)
{
    Base *array[3] = {new A(), new B(), new C()};
    srand (time(NULL));
    int number = rand() % 3;
    for (int i = 0; i < 3; i++)
    {
        if (i != number)
            delete array[i];
    }
    return (array[number]);
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "This is class A" << '\n';
        (void) a;
    }
    catch(const std::exception& e){}

    try
    {
        B& a = dynamic_cast<B&>(p);
        std::cout << "This is class B" << '\n';
        (void) a;
    }
    catch(const std::exception& e){}
    try
    {
        C& a = dynamic_cast<C&>(p);
        std::cout << "This is class C" << '\n';
        (void) a;
    }
    catch(const std::exception& e){}
}

void identify(Base* p)
{
    A *ptr_1 = dynamic_cast<A*>(p);
    if (ptr_1 != NULL)
    {
        std::cout << "This is class A" << '\n';
        return ;
    }
    B *ptr_2 = dynamic_cast<B*>(p);
    if (ptr_2 != NULL)
    {
        std::cout << "This is class B" << '\n';
        return ;
    }
    C *ptr_3 = dynamic_cast<C*>(p);
    if (ptr_3 != NULL)
    {
        std::cout << "This is class C" << '\n';
        return ;
    }
}

int main()
{
    Base *ptr;

    ptr = generate();
    identify(ptr);
    identify(ptr);
    return (0);
}
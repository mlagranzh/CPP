/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 04:44:59 by celys             #+#    #+#             */
/*   Updated: 2022/01/04 06:42:18 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "************************" << std::endl;
    std::stack<int> s(mstack);
    std::cout << s.top() << std::endl;
    std::cout << "************************" << std::endl;
    std::list<int> list;
    
    list.push_front(5);
    list.push_front(17);
    
    std::cout << *list.begin() << std::endl;
    
    list.pop_front();
    
    std::cout << list.size() << std::endl;
    
    list.push_front(3);
    list.push_front(5);
    list.push_front(737);
    list.push_front(3);
    list.push_front(5);
    list.push_front(737);
    list.push_front(0);
    
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    return 0;
}
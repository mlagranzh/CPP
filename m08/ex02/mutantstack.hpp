/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 06:18:18 by celys             #+#    #+#             */
/*   Updated: 2022/01/04 06:31:50 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{    
    public:
        MutantStack() : std::stack<T>(){};
        ~MutantStack() {};
        MutantStack(MutantStack &array) : std::stack<T>(array){};
        MutantStack operator=(MutantStack &array) 
        {            
            if (this == &array)
                return (*this);
            std::stack<T>::operator=(array);
            return (*this);
        };
		typedef	T*	iterator;
        iterator begin()
        {
			return (&this->top() - this -> size() + 1);
        };
		iterator end() { return (&this->top() + 1); }

};

#endif
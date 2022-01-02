/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 06:18:18 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 14:35:39 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack 
{
    private:
        unsigned int size;
    
    public:
        MutantStack();
        MutantStack(unsigned int);
        ~MutantStack();
        MutantStack(MutantStack &array);
        MutantStack operator=(MutantStack &array);
        
        unsigned int size();
        void push(T element);
        T top();
};

#endif
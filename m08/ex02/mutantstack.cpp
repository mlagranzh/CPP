/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 14:22:53 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 14:27:06 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

MutantStack::MutantStack();
MutantStack::MutantStack(unsigned int);
MutantStack::~MutantStack();
MutantStack::MutantStack(MutantStack &array);
MutantStack MutantStack::operator=(MutantStack &array);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 21:19:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 21:54:04 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    this -> type = "ice";
}

Ice    &Ice::operator=( const Ice &Ice )
{
	this -> type = Ice.getType();
	return *this;
}

Ice::Ice(const Ice &Ice) : AMateria("ice")
{
	this -> type = Ice.getType();
}

Ice::~Ice()
{
	
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}


AMateria* Ice::clone() const
{
	Ice *newIce;
	newIce = new Ice(*this);
	
	return (newIce);
}
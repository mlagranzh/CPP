/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 21:19:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:34:33 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    this -> type = "cure";
}

Cure    &Cure::operator=( const Cure &Cure )
{
	this -> type = Cure.getType();
	return *this;
}

Cure::Cure(const Cure &Cure) : AMateria("cure")
{
	this -> type = Cure.getType();
}

Cure::~Cure()
{
	
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds" << " *" << std::endl;
}


AMateria* Cure::clone() const
{
	Cure *newCure;
	newCure = new Cure(*this);
	
	return (newCure);
}
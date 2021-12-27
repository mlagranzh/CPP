/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:55:10 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 21:36:03 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    setType("no_type");
}

AMateria::AMateria(std::string const & type)
{
    setType(type);
}

AMateria::~AMateria()
{
    
}

AMateria::AMateria(const AMateria &AMateria)
{
    this -> setType(AMateria.getType());
}

AMateria& AMateria::operator=(const AMateria &AMateria)
{
    this -> setType(AMateria.getType());
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this -> type);
}

void AMateria::setType(std::string const &type)
{
    this -> type = type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* no text " << target.getName() << " *" << std::endl;
}
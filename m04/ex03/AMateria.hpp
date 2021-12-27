/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:25:26 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:05:22 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria &AMateria);
        AMateria& operator=(const AMateria &AMateria);
        
        std::string const & getType() const; //Returns the materia type
        void setType(std::string const &type);
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
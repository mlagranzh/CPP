/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:38:30 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:34:22 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &ice);
        virtual ~Ice();
        Ice & operator=(const Ice &cure);
        
        AMateria* clone() const;
        void use(ICharacter& target);
        void setType(std::string const &type);
};

#endif
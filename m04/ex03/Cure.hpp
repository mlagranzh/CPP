/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:38:30 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:34:18 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &Cure);
        virtual ~Cure();
        Cure & operator=(const Cure &cure);
        
        AMateria* clone() const;
        void use(ICharacter& target);
        void setType(std::string const &type);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:38:30 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 21:13:41 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :
        AMateria    *_materia[4];
        int        _num_equipeed;
        std::string _name;
    public:
        Character();
        Character(std::string Name);
        ~Character();
        Character(const Character &character);
        Character& operator=(const Character &character);

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        void        set_name(std::string Name);
        std::string const &getName() const;
        int get_num_equipeed() const;
        void set_num_equipeed(int num);
        AMateria    *get_materia(int idx) const;
};

#endif
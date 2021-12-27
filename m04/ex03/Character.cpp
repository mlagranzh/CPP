/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:25:13 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:20:26 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    set_name("NO_NAME");
    this -> set_num_equipeed(0);
}

Character::Character(std::string Name)
{
    this -> set_name(Name);
    this -> set_num_equipeed(0);
}

Character::~Character()
{
    for (int i = 0; i < this -> get_num_equipeed(); i++)
        delete this -> get_materia(i);
}

Character::Character(const Character &character)
{
    this -> set_num_equipeed(character.get_num_equipeed());
    this -> set_name(character.getName());
	for (int i = 0; i < character.get_num_equipeed(); i++)
	{
		this -> _materia[i] = character.get_materia(i) -> clone();
	}
}

Character& Character::operator=(const Character &character)
{
    this -> set_num_equipeed(character.get_num_equipeed());
    this -> set_name(character.getName());
	for (int i = 0; i < character.get_num_equipeed(); i++)
	{
		this -> _materia[i] = character.get_materia(i) -> clone();
	}
    return (*this);
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > this -> get_num_equipeed() || idx < 0)
	{
		std::cout << "No materia!" << std::endl;
		return ;
	}
    this -> _materia[idx] -> use(target);
}

void Character::set_name(std::string Name)
{
    this -> _name = Name;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::set_num_equipeed(int num)
{
    this -> _num_equipeed = num;
}

int Character::get_num_equipeed() const
{
	return (this->_num_equipeed);
}

void Character::equip(AMateria* m)
{
    if (m == NULL)
    {
        std::cout << "AMateria error!" << std::endl;
        return ;
    }
    if (this->get_num_equipeed() > 3)
    {
        std::cout << "AMateria FULL!" << std::endl;
        delete m;
        return ;
    }
    this -> _materia[this -> get_num_equipeed()] = m;
    this -> set_num_equipeed(this -> get_num_equipeed() + 1);
}

void Character::unequip(int idx)
{
    if (idx > this -> get_num_equipeed() || idx < 0)
    {
		std::cout << "No materia!" << std::endl;
		return ;
	}
    int j = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i != idx)
        {
            this -> _materia[j] = this -> _materia[i];
            j++;
        }
    }
    this -> set_num_equipeed(this -> get_num_equipeed() - 1);
}

AMateria    *Character::get_materia(int idx) const
{
    return (this -> _materia[idx]);
}

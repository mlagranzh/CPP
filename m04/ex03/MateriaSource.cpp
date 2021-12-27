/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:53:48 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:36:07 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this -> set_num_materia(0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < get_num_materia(); i++)
		delete this -> get_materia(i);
}

MateriaSource::MateriaSource(MateriaSource &materiaSource)
{
    this -> set_num_materia(materiaSource.get_num_materia());
	for (int i = 0; i < materiaSource.get_num_materia(); i++)
	{
		this -> _materia[i] = materiaSource.get_materia(i) -> clone();
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource &materiaSource)
{
    this -> set_num_materia(materiaSource.get_num_materia());
	for (int i = 0; i < materiaSource.get_num_materia(); i++)
	{
		this -> _materia[i] = materiaSource.get_materia(i) -> clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (this -> get_num_materia() > 3)
    {
        std::cout << "AMateria FULL!" << std::endl;
		delete materia;
        return ;
    }
    this -> _materia[this -> get_num_materia()] = materia;
    this -> set_num_materia(this -> get_num_materia() + 1);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this -> get_num_materia(); i++)
	{
		if (this -> get_materia(i) -> getType() == type)
			return this -> get_materia(i) -> clone();
	}
	std::cout << "Invalid type" << std::endl;
	return (NULL);
}

int MateriaSource::get_num_materia() const
{
    return (this -> _num_materia);
}

void MateriaSource::set_num_materia(int n)
{
    this -> _num_materia = n;
}

AMateria    *MateriaSource::get_materia(int idx) const
{
    return (this -> _materia[idx]);
}

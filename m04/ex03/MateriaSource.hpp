/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:35:18 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 20:39:11 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_materia[4];
        int        _num_materia;
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource &materiaSource);
        MateriaSource& operator=(MateriaSource &materiaSource);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
        int get_num_materia() const;
        void set_num_materia(int n);
        AMateria    *get_materia(int idx) const;
};

#endif
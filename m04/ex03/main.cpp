/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/27 22:43:45 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    std::cout << "****************************************************************" << std::endl;
    IMateriaSource* materia_source = new MateriaSource();
    materia_source->learnMateria(new Ice());
    materia_source->learnMateria(new Cure());
    materia_source->learnMateria(new Ice());
    materia_source->learnMateria(new Cure());
    materia_source->learnMateria(new Cure()); //FULL
    AMateria *m1 = materia_source->createMateria("ice");
    AMateria *m2 = materia_source->createMateria("dfsdf");
    delete materia_source;
    std::cout << "****************************************************************" << std::endl;
    ICharacter* m3 = new Character("me");
    m3->equip(m1);
    m3->equip(m2); //error
    delete m3;
    return (0);
}
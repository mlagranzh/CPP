/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 00:05:26 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    set_Name("NO NAME");
    set_Hitpoints(10);
    set_Energy_points(10);
    set_Attack_damage(0);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
    std::cout << "Constructor DiamondTrap called" << std::endl;
    set_Name(Name);
    set_Hitpoints(100);
    set_Energy_points(50);
    set_Attack_damage(20);
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    this -> set_Name(DiamondTrap.Name);
    this -> set_Hitpoints(DiamondTrap.Hitpoints);
    this -> set_Energy_points(DiamondTrap.Energy_points);
    this -> set_Attack_damage(DiamondTrap.Attack_damage);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap)
{
    this -> set_Name(DiamondTrap.Name);
    this -> set_Hitpoints(DiamondTrap.Hitpoints);
    this -> set_Energy_points(DiamondTrap.Energy_points);
    this -> set_Attack_damage(DiamondTrap.Attack_damage);
    return *this;
}

unsigned int DiamondTrap::get_Hitpoints(void)
{
   return(this -> Hitpoints);
}

unsigned int DiamondTrap::get_Energy_points(void)
{
   return(this -> Energy_points);
}

unsigned int DiamondTrap::get_Attack_damage(void)
{
   return(this -> Attack_damage);
}

std::string DiamondTrap::get_Name(void)
{
   return(this -> Name);
}

void DiamondTrap::set_Hitpoints(unsigned int amount)
{
    this -> Hitpoints = amount;
}

void DiamondTrap::set_Energy_points(unsigned int amount)
{
    this -> Energy_points = amount;
}

void DiamondTrap::set_Attack_damage(unsigned int amount)
{
    this -> Attack_damage = amount;
}

void DiamondTrap::set_Name(std::string string)
{
    this -> Name = string;
}

void DiamondTrap::attack(std::string const &target)
{
    std::cout << "DiamondTrap " << this -> get_Name() << " attack " << target <<  " causing " << this -> get_Attack_damage() << " points of damage!" << std::endl;
    this -> set_Attack_damage(0);
    this -> set_Energy_points(this -> get_Energy_points() - 1);
}

void DiamondTrap::whoAmI()
{
    std::cout << " DiamondTrap name: " << this -> get_Name() << "ClapTrap name: " << this -> get_Name() << std::endl;
}
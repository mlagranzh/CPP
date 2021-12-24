/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/22 20:52:19 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    set_Name("NO NAME");
    set_Hitpoints(10);
    set_Energy_points(10);
    set_Attack_damage(0);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Constructor called" << std::endl;
    set_Name(Name);
    set_Hitpoints(10);
    set_Energy_points(10);
    set_Attack_damage(0);
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    this -> set_Name(ClapTrap.Name);
    this -> set_Hitpoints(ClapTrap.Hitpoints);
    this -> set_Energy_points(ClapTrap.Energy_points);
    this -> set_Attack_damage(ClapTrap.Attack_damage);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
    this -> set_Name(ClapTrap.Name);
    this -> set_Hitpoints(ClapTrap.Hitpoints);
    this -> set_Energy_points(ClapTrap.Energy_points);
    this -> set_Attack_damage(ClapTrap.Attack_damage);
    return *this;
}

unsigned int ClapTrap::get_Hitpoints(void)
{
   return(this -> Hitpoints);
}

unsigned int ClapTrap::get_Energy_points(void)
{
   return(this -> Energy_points);
}

unsigned int ClapTrap::get_Attack_damage(void)
{
   return(this -> Attack_damage);
}

std::string ClapTrap::get_Name(void)
{
   return(this -> Name);
}

void ClapTrap::set_Hitpoints(unsigned int amount)
{
    this -> Hitpoints = amount;
}

void ClapTrap::set_Energy_points(unsigned int amount)
{
    this -> Energy_points = amount;
}

void ClapTrap::set_Attack_damage(unsigned int amount)
{
    this -> Attack_damage = amount;
}

void ClapTrap::set_Name(std::string string)
{
    this -> Name = string;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this -> get_Name() << " attack " << target <<  " causing " << this -> get_Attack_damage() << " points of damage!" << std::endl;
    this -> set_Attack_damage(0);
    this -> set_Energy_points(this -> get_Energy_points() - 1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << amount << " take Damage"  << std::endl;
    this -> set_Attack_damage(amount + this -> get_Attack_damage());
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << amount << " be Repaired"  << std::endl;
    this -> set_Hitpoints(amount + this -> get_Hitpoints());
}
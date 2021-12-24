/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/23 02:56:26 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    set_Name("NO NAME");
    set_Hitpoints(10);
    set_Energy_points(10);
    set_Attack_damage(0);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "Constructor ScavTrap called" << std::endl;
    set_Name(Name);
    set_Hitpoints(100);
    set_Energy_points(50);
    set_Attack_damage(20);
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    this -> set_Name(ScavTrap.Name);
    this -> set_Hitpoints(ScavTrap.Hitpoints);
    this -> set_Energy_points(ScavTrap.Energy_points);
    this -> set_Attack_damage(ScavTrap.Attack_damage);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
    this -> set_Name(ScavTrap.Name);
    this -> set_Hitpoints(ScavTrap.Hitpoints);
    this -> set_Energy_points(ScavTrap.Energy_points);
    this -> set_Attack_damage(ScavTrap.Attack_damage);
    return *this;
}

unsigned int ScavTrap::get_Hitpoints(void)
{
   return(this -> Hitpoints);
}

unsigned int ScavTrap::get_Energy_points(void)
{
   return(this -> Energy_points);
}

unsigned int ScavTrap::get_Attack_damage(void)
{
   return(this -> Attack_damage);
}

std::string ScavTrap::get_Name(void)
{
   return(this -> Name);
}

void ScavTrap::set_Hitpoints(unsigned int amount)
{
    this -> Hitpoints = amount;
}

void ScavTrap::set_Energy_points(unsigned int amount)
{
    this -> Energy_points = amount;
}

void ScavTrap::set_Attack_damage(unsigned int amount)
{
    this -> Attack_damage = amount;
}

void ScavTrap::set_Name(std::string string)
{
    this -> Name = string;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this -> get_Name() << " attack " << target <<  " causing " << this -> get_Attack_damage() << " points of damage!" << std::endl;
    this -> set_Attack_damage(0);
    this -> set_Energy_points(this -> get_Energy_points() - 1);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << get_Name() << " has entered gate guard mode." << std::endl;
}
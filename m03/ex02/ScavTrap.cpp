/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 22:10:19 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    set_Name("NO NAME");
    set_Hitpoints(100);
    set_Energy_points(50);
    set_Attack_damage(20);
    std::cout << "ScavTrap Default constructor " << this -> get_Name() << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor " << this -> get_Name() << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{    
    ClapTrap::set_Name(Name);
    ClapTrap::set_Hitpoints(100);
    ClapTrap::set_Energy_points(50);
    ClapTrap::set_Attack_damage(20);

    std::cout << "ScavTrap Constructor " << this -> get_Name() << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
    std::cout << "ScavTrap Copy constructor " << std::endl;
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
    return (*this);
}

unsigned int ScavTrap::get_Hitpoints(void)
{
   return (this -> Hitpoints);
}

unsigned int ScavTrap::get_Energy_points(void)
{
   return (this -> Energy_points);
}

unsigned int ScavTrap::get_Attack_damage(void)
{
   return (this -> Attack_damage);
}

std::string ScavTrap::get_Name(void)
{
   return (this -> Name);
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
    this -> set_Energy_points(this -> get_Energy_points() - 1);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this -> get_Name() << " have enterred in Gate keeper mode" << std::endl;
}
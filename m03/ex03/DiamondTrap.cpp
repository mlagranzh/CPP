/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 22:20:55 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this -> set_Name(Name);
    ClapTrap::set_Name("NoName_clap_name");
    this -> set_Hitpoints(FragTrap::get_Hitpoints());
    this -> set_Energy_points(ScavTrap::get_Energy_points());
    this -> set_Attack_damage(FragTrap::get_Attack_damage());
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor " << this -> get_Name() << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
    this -> set_Name(Name);
    ClapTrap::set_Name(Name + "_clap_name");
    this -> set_Hitpoints(FragTrap::get_Hitpoints());
    this -> set_Energy_points(ScavTrap::get_Energy_points());
    this -> set_Attack_damage(FragTrap::get_Attack_damage());
    std::cout << "DiamondTrap Constructor " << this -> get_Name() << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
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
    return (*this);
}

unsigned int DiamondTrap::get_Hitpoints(void)
{
   return (this -> Hitpoints);
}

unsigned int DiamondTrap::get_Energy_points(void)
{
   return (this -> Energy_points);
}

unsigned int DiamondTrap::get_Attack_damage(void)
{
   return (this -> Attack_damage);
}

std::string DiamondTrap::get_Name(void)
{
   return (this -> Name);
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
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this -> get_Name() << " ClapTrap name: " << ClapTrap::get_Name() << std::endl;
}
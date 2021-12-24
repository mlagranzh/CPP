/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 22:10:37 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    set_Name("NO NAME");
    set_Hitpoints(100);
    set_Energy_points(50);
    set_Attack_damage(20);
    std::cout << "FragTrap Default constructor " << this -> get_Name() << " called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor " << this -> get_Name() << " called" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{    
    ClapTrap::set_Name(Name);
    ClapTrap::set_Hitpoints(100);
    ClapTrap::set_Energy_points(100);
    ClapTrap::set_Attack_damage(30);

    std::cout << "FragTrap Constructor " << this -> get_Name() << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
    std::cout << "FragTrap Copy constructor called " << std::endl;
    this -> set_Name(FragTrap.Name);
    this -> set_Hitpoints(FragTrap.Hitpoints);
    this -> set_Energy_points(FragTrap.Energy_points);
    this -> set_Attack_damage(FragTrap.Attack_damage);
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
    this -> set_Name(FragTrap.Name);
    this -> set_Hitpoints(FragTrap.Hitpoints);
    this -> set_Energy_points(FragTrap.Energy_points);
    this -> set_Attack_damage(FragTrap.Attack_damage);
    return (*this);
}

unsigned int FragTrap::get_Hitpoints(void)
{
   return (this -> Hitpoints);
}

unsigned int FragTrap::get_Energy_points(void)
{
   return (this -> Energy_points);
}

unsigned int FragTrap::get_Attack_damage(void)
{
   return (this -> Attack_damage);
}

std::string FragTrap::get_Name(void)
{
   return (this -> Name);
}

void FragTrap::set_Hitpoints(unsigned int amount)
{
    this -> Hitpoints = amount;
}

void FragTrap::set_Energy_points(unsigned int amount)
{
    this -> Energy_points = amount;
}

void FragTrap::set_Attack_damage(unsigned int amount)
{
    this -> Attack_damage = amount;
}

void FragTrap::set_Name(std::string string)
{
    this -> Name = string;
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this -> get_Name() << " attack " << target <<  " causing " << this -> get_Attack_damage() << " points of damage!" << std::endl;
    this -> set_Energy_points(this -> get_Energy_points() - 1);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << get_Name() << " positive high fives request" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/23 23:13:57 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    set_Name("NO NAME");
    set_Hitpoints(10);
    set_Energy_points(10);
    set_Attack_damage(0);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "Constructor FragTrap called" << std::endl;
    set_Name(Name);
    set_Hitpoints(100);
    set_Energy_points(100);
    set_Attack_damage(30);
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
    std::cout << "Copy constructor called" << std::endl;
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
    return *this;
}

unsigned int FragTrap::get_Hitpoints(void)
{
   return(this -> Hitpoints);
}

unsigned int FragTrap::get_Energy_points(void)
{
   return(this -> Energy_points);
}

unsigned int FragTrap::get_Attack_damage(void)
{
   return(this -> Attack_damage);
}

std::string FragTrap::get_Name(void)
{
   return(this -> Name);
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
    this -> set_Attack_damage(0);
    this -> set_Energy_points(this -> get_Energy_points() - 1);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << get_Name() << " positive high fives request" << std::endl;
}
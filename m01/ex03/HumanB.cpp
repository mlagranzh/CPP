/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/11 14:05:36 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this -> get_name() << " attacks with his " << this -> weapon->getType() << std::endl;
}

std::string HumanB::get_name()
{
    return (this->name);
}

void HumanB::set_name(std::string str)
{
    this->name = str;
}

HumanB::HumanB(std::string name)
{
    this -> set_name(name);
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
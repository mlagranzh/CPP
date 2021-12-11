/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/10 04:07:28 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA()
// {
    
// }

void HumanA::attack()
{
    std::cout << this -> name << " attacks with his " << this -> weapon.getType() << std::endl;
}

std::string HumanA::get_name()
{
    return (this->name);
}

void HumanA::set_name(std::string str)
{
    this->name = str;
}


HumanA::HumanA(std::string name, Weapon &weapon) :weapon(weapon)
{
    this->name = name;
}

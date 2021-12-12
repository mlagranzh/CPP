/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/11 16:28:08 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this -> get_name() << " attacks with his " << this -> weapon.getType() << std::endl;
}

std::string HumanA::get_name()
{
    return (this->name);
}

void HumanA::set_name(std::string str)
{
    this->name = str;
}

HumanA::HumanA(std::string name, Weapon &weapon) :weapon(weapon) //ссылки только так иницилазируются
{
    this->set_name(name);
}

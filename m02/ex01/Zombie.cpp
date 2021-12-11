/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/10 01:58:48 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::get_name(void)
{
    return (this->name);
}
void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Zombie created..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->get_name() << " is destruct..." << std::endl;
}
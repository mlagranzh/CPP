/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:40:49 by celys             #+#    #+#             */
/*   Updated: 2021/12/23 03:01:58 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap pingwi("pingwi");
    ScavTrap straus("straus");

    pingwi.attack("straus");
    straus.takeDamage(pingwi.get_Attack_damage());

    pingwi.guardGate();
    pingwi.attack("straus");
    straus.takeDamage(straus.get_Attack_damage());
    straus.beRepaired(30);
    pingwi.attack("straus");
    straus.takeDamage(straus.get_Attack_damage());
}
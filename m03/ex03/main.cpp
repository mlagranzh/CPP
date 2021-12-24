/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:40:49 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 22:28:55 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) 
{
    DiamondTrap pingwin("pingwin");
    DiamondTrap straus("straus");

    pingwin.attack("straus");
    straus.attack("pingwin");

    pingwin.takeDamage(5);
    straus.takeDamage(3);

    pingwin.beRepaired(20);
    straus.beRepaired(20);

    std::cout << pingwin.get_Name() << " Hitpoints: " << pingwin.get_Hitpoints() << std::endl;
    std::cout << straus.get_Name() << " Hitpoints: " << pingwin.get_Hitpoints() << std::endl;

    std::cout << pingwin.get_Name() << " Energy_points: " << pingwin.get_Energy_points() << std::endl;
    std::cout << straus.get_Name() << " Energy_points: " << pingwin.get_Energy_points() << std::endl;

    std::cout << pingwin.get_Name() << " Attack_damage: " << pingwin.get_Attack_damage() << std::endl;
    std::cout << straus.get_Name() << " Attack_damage: " << pingwin.get_Attack_damage() << std::endl;

    pingwin.whoAmI();
    return 0;
}

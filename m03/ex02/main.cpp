/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:40:49 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 22:08:33 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) 
{
    FragTrap pingwin("pingwin");
    FragTrap straus("straus");

    pingwin.attack("straus");
    straus.attack("pingwin");

    pingwin.takeDamage(5);
    straus.takeDamage(3);

    pingwin.beRepaired(20);
    straus.beRepaired(20);

    std::cout << pingwin.get_Hitpoints() << std::endl;
    std::cout << straus.get_Hitpoints() << std::endl;

    pingwin.highFivesGuys();
    return 0;
}

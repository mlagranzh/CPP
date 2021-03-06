/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 21:54:52 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) 
{
    ClapTrap pingwin("pingwin");
    ClapTrap straus("straus");

    pingwin.attack("straus");
    straus.attack("pingwin");

    pingwin.takeDamage(5);
    straus.takeDamage(3);

    pingwin.beRepaired(20);
    straus.beRepaired(20);

    std::cout << pingwin.get_Hitpoints() << std::endl;
    std::cout << straus.get_Hitpoints() << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:40:49 by celys             #+#    #+#             */
/*   Updated: 2021/12/23 23:15:28 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	FragTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.get_Attack_damage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.get_Attack_damage());
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.get_Attack_damage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.get_Attack_damage());
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
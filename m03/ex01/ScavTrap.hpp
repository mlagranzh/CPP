/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/20 22:56:58 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap : public ScavTrap
{
    private:
        std::string		Name;
        unsigned int	Hitpoints;
        unsigned int	Energy_points;
        unsigned int	Attack_damage;
        
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &fixed);
        ScavTrap& operator=(const ScavTrap &fixed);
        
		void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		
        unsigned int get_Hitpoints(void);
		unsigned int get_Energy_points(void);
        unsigned int get_Attack_damage(void);
		std::string	get_Name(void);

		void 	set_Hitpoints(unsigned int amount);
		void 	set_Energy_points(unsigned int amount);
        void 	set_Attack_damage(unsigned int amount);
		void	set_Name(std::string string);
        
        void guardGate();
};

#endif
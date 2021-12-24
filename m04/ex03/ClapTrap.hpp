/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/23 01:44:25 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string		Name;
        unsigned int	Hitpoints;
        unsigned int	Energy_points;
        unsigned int	Attack_damage;
        
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &fixed);
        ClapTrap& operator=(const ClapTrap &fixed);
        
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
};

#endif
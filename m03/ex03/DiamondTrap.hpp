/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/24 20:46:05 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
# define DIAMONDTRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string Name);
        DiamondTrap(const DiamondTrap &Diamond);
        DiamondTrap& operator=(const DiamondTrap &Diamond);
		void attack(std::string const & target);
		
        unsigned int get_Hitpoints(void);
		unsigned int get_Energy_points(void);
        unsigned int get_Attack_damage(void);
		std::string	get_Name(void);

		void 	set_Hitpoints(unsigned int amount);
		void 	set_Energy_points(unsigned int amount);
        void 	set_Attack_damage(unsigned int amount);
		void	set_Name(std::string string);
        void    whoAmI(void);
};

#endif
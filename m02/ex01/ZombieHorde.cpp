/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/10 02:36:44 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *my_Zombie;
    
    my_Zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        my_Zombie[i].set_name(name.append("1"));
    return (my_Zombie);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/10 01:43:50 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie my_Zombie_stack;
    my_Zombie_stack.set_name("Zombie on stack");
    my_Zombie_stack.announce();

    Zombie *my_Zombie_heap;
    my_Zombie_heap = newZombie("Zombie on heap");
    my_Zombie_heap->announce();
    delete my_Zombie_heap;
    
    randomChump("Zombie from randomChump on stack");
}
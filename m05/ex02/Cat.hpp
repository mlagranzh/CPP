/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 03:32:24 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{        
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(std::string Name);
        Cat(const Cat &Cat);
        Cat& operator=(const Cat &Cat);
        void makeSound();

        Brain*  get_Brain() const;
        void    set_Brain(Brain *Brain);
};

#endif
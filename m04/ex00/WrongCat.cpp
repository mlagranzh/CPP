/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:41:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/26 17:21:44 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "[WrongCat] : Default Constructor called" << std::endl;
    set_type("CAAATT");
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] : Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    std::cout << "[WrongCat] : Copy constructor called" << std::endl;
    this -> set_type(WrongCat.get_type());
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    this -> set_type(WrongCat.get_type());
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "meauuu" << std::endl;
}
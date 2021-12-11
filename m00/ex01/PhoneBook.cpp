/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:57 by celys             #+#    #+#             */
/*   Updated: 2021/12/06 19:17:18 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int i)
{
   std::cout << "First name: ";
   this->contact[i].set_first_name();
   std::cout << "Last name: ";
   this->contact[i].set_last_name();
   std::cout << "Nickname: ";
   this->contact[i].set_nickname();
   std::cout << "Phone number: ";
   this->contact[i].set_phone_number();
   std::cout << "Darkest secret: ";
   this->contact[i].set_darkest_secret();
}

void PhoneBook::search(int i)
{
   std::cout << "First name: " << this->contact[i].get_first_name() << std::endl;
   std::cout << "Last name: " << this->contact[i].get_last_name() << std::endl;
   std::cout << "Nickname: " << this->contact[i].get_nickname() << std::endl;
   std::cout << "Phone number: " << this->contact[i].get_phone_number() << std::endl;
   std::cout << "Darkest secret: " << this->contact[i].get_darkest_secret() << std::endl;
}

std::string PhoneBook::rewrite_string(std::string str)
{
	if (str.size() > 10)
    {
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}

void PhoneBook::summary_print(int i)
{
	std::cout << std::setw(10) << this->contact[i].get_index() << "|";
	std::cout << std::setw(10) << rewrite_string(this->contact[i].get_first_name()) << "|";
   std::cout << std::setw(10) << rewrite_string(this->contact[i].get_last_name()) << "|";
   std::cout << std::setw(10) << rewrite_string(this->contact[i].get_nickname()) << "|" << std::endl;
}

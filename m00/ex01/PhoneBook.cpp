/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:57 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 21:06:25 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int i)
{
   std::cout << "First name: ";
   std::cin >> this->contact[i].first_name;
   std::cout << "Last name: ";
   std::cin >> this->contact[i].last_name;
   std::cout << "Nickname: ";
   std::cin >> this->contact[i].nickname;
   std::cout << "Phone number: ";
   std::cin >> this->contact[i].phone_number;
   std::cout << "Darkest secret: ";
   std::cin >> this->contact[i].darkest_secret;
}

void PhoneBook::search(int i)
{
   std::cout << "First name: " << this->contact[i].first_name << std::endl;
   std::cout << "Last name: " << this->contact[i].last_name << std::endl;
   std::cout << "Nickname: " << this->contact[i].nickname << std::endl;
   std::cout << "Phone number: " << this->contact[i].phone_number << std::endl;
   std::cout << "Darkest secret: " << this->contact[i].darkest_secret << std::endl;
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
	std::cout << std::setw(10) << this->contact[i].index << "|";
	std::cout << std::setw(10) << rewrite_string(this->contact[i].first_name) << "|";
    std::cout << std::setw(10) << rewrite_string(this->contact[i].last_name) << "|";
    std::cout << std::setw(10) << rewrite_string(this->contact[i].nickname) << "|" << std::endl;
}

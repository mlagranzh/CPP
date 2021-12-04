/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:08:46 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 21:11:55 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int Contact::count = 0;

int	Contact::Get_id(void)
{
	return(id);
}

bool	Contact::GetFlag(void)
{
	return(flag);
}

int	Contact::Get_count(void)
{
	return(count);
}

std::string	Contact::Get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::Get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::Get_nickname(void)
{
	return (this->nickname);
}

void	Contact::GetInfo(void)
{
	std::cout << "----------" << std::endl;
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
	std::cout << "----------" << std::endl;
}

void	Contact::SetInfo(void)
{
	std::string str;

	std::cout << "First name: ";
	std::cin >> str;
	first_name = str;
	std::cout << "Last name: ";
	std::cin >> str;
	last_name = str;
	std::cout << "Nickname: ";
	std::cin >> str;
	nickname = str;
	std::cout << "Phone number: ";
	std::cin >> str;
	phone_number = str;
	std::cout << "Darkest secret: ";
	std::cin >> str;
	darkest_secret = str;
	flag = true;
}

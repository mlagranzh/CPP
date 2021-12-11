/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:08:46 by celys             #+#    #+#             */
/*   Updated: 2021/12/06 19:31:16 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::get_index(void)
{
	return(this->index);
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

void	Contact::set_first_name(void)
{
   std::cin >> this->first_name;
}

void	Contact::set_last_name(void)
{
   std::cin >> this->last_name;
}

void	Contact::set_nickname(void)
{
   std::cin >> this->nickname;
}

void	Contact::set_phone_number(void)
{
   std::cin >> this->phone_number;
}

void	Contact::set_darkest_secret(void)
{
   std::cin >> this->darkest_secret;
}

void	Contact::set_index(int i)
{
   this->index = i;
}
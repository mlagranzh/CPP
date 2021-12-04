/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:58 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 22:26:58 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

#include "Contact.hpp"
 
class PhoneBook
{
   public:
      Contact	contact[8];
      void	add(int i);
      void	search(int i);
	  std::string	rewrite_string(std::string str);
	  void	summary_print(int i);
};

#endif
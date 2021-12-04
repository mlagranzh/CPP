/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:27:19 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 22:28:08 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact 
{
   public:
      int			index;
      std::string	first_name;
      std::string	last_name;
      std::string	nickname;
      std::string	phone_number;
      std::string	darkest_secret;
      
      // void GetInfo(void);
      // void SetInfo(void);
      
      // std::string Get_first_name(void);
      // std::string Get_last_name(void);
      // std::string Get_nickname(void);
      
      // int			Get_id(void);
      // static int	Get_count(void);

};

#endif
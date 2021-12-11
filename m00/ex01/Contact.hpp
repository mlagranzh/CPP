/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:27:19 by celys             #+#    #+#             */
/*   Updated: 2021/12/06 20:46:18 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact 
{
   private:
      int			index;
      std::string	first_name;
      std::string	last_name;
      std::string	nickname;
      std::string	phone_number;
      std::string	darkest_secret;
   public:      
      int			get_index(void);
      std::string get_first_name(void);
      std::string get_last_name(void);
      std::string get_nickname(void);
      std::string	get_phone_number(void);
      std::string	get_darkest_secret(void);

      void set_first_name(void);
      void set_last_name(void);
      void set_nickname(void);
      void	set_phone_number(void);
      void	set_darkest_secret(void);
      void  set_index(int i);
};

#endif
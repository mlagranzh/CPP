/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarСonversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 13:42:22 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

#include <iostream>

class ScalarСonversion
{
    private:
        std::string string;
    public:
        ScalarСonversion();
        ~ScalarСonversion();
		ScalarСonversion(std::string string);
		ScalarСonversion(const ScalarСonversion &scalar);
        ScalarСonversion& operator=(const ScalarСonversion &scalar);

		operator int() const;
		operator float() const;
		operator double() const;
		operator char() const;

        void print_char() const;
        void print_float() const;
        void print_double() const;
        void print_int() const;
};
#endif
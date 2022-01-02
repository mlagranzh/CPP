/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 05:10:24 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 10:48:20 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int length;
        std::vector<int> v;
        int current;
	public:
        Span();
		~Span();
		Span(unsigned int N);
		Span(const Span& span);
		Span& operator=(const Span& span);

        void addNumber(int number);
        int shortestSpan() const; 
        int longestSpan() const;
};

#endif
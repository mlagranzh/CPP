/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 05:10:24 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 14:18:19 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span
{
    private:
        unsigned int length;
        std::vector<int> v;
        unsigned int current;
	public:
        Span();
		~Span();
		Span(unsigned int N);
		Span(const Span& span);
		Span& operator=(const Span& span);

        void addNumber(int number);
        void addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
        int shortestSpan() const; 
        int longestSpan() const;
};

#endif
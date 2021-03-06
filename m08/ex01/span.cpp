/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 08:53:53 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 14:19:12 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int number)
{
    this -> length = number;
    this -> v.resize(number);
    this -> current = 0;
}

Span::Span()
{
    this -> length = 0;
    this -> current = 0;
}

Span::~Span() {}

Span::Span(const Span& span)
{
    this -> length = span.length;
    this -> v = span.v;
}

Span& Span::operator=(const Span& span)
{
    if (this != &span)
    {
        this -> length = span.length;
        this -> v = span.v;
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (this -> current + 1 > this -> length)
        throw std::logic_error("INDEX OUT OF RANGE");
    this -> v[this -> current] = number;
    this -> current += 1;
}

void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2)
{
    while (it1 != it2)
    {
        this -> addNumber(*it1);
        it1++;
    }
}


int Span::shortestSpan() const
{
    if (this -> current < 2)
        throw std::logic_error("too few numbers");
    std::vector<int> result = this -> v;
    for (unsigned int i = 0; i < this -> v.size(); i++)
        for (unsigned int j = i + 1; j < this -> v.size(); j++)
            result.push_back(abs(this -> v[i] - this -> v[j]));
    std::sort(result.begin(), result.end());
    return (result[0]);
}

int Span::longestSpan() const
{
    if (this -> current < 2)
        throw std::logic_error("too few numbers");
    std::vector<int> result = this -> v;
    std::sort(result.begin(), result.end());
    return (abs(result[result.size() - 1] - result[0]));
}

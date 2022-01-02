/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 06:18:18 by celys             #+#    #+#             */
/*   Updated: 2022/01/02 07:14:10 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array 
{
    private:
        T *_arr;
        int length;
    public:
        Array()
        {
            _arr = new T();
            length = 0;
        };
        Array(unsigned int a) 
        {
            _arr = new T[a];
            length = a;
        };
        ~Array()
        {
            delete[] _arr;
        };
        Array(Array &array)
        {
            // delete[] _arr;
            _arr = new T[array.size()];
            for (int i = 0; i < array.size(); i++)
                _arr[i] = array[i];
            length = array.size();
        };
        Array operator=(Array &array)
        {
            // delete[] _arr;
            _arr = new T[array.size()];
            for (int i = 0; i < array.size(); i++)
                _arr[i] = array[i];
            length = array.size();

            return (*this);
        };
        T& operator[](int index)
        {
            if (index > length - 1 || index < 0)
                throw std::logic_error("INDEX OUT OF RANGE!");
            return _arr[index];
        };
        int size() const
        {
            return (length);
        };
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 06:18:18 by celys             #+#    #+#             */
/*   Updated: 2022/01/03 17:48:14 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array 
{
    private:
        T *arr;
        int length;
    public:
        Array()
        {
            this -> arr = new T();
            this -> length = 0;
        };
        Array(unsigned int a) 
        {
            this -> arr = new T[a];
            this -> length = a;
        };
        ~Array()
        {
            delete[] this -> arr;
        };
        Array(Array &array)
        {
            this -> arr = new T[array.size()];
            for (int i = 0; i < array.size(); i++)
                this -> arr[i] = array[i];
            this -> length = array.size();
        };
        Array operator=(Array &array)
        {
            delete[] this -> arr;
            this -> arr = new T[array.size()];
            for (int i = 0; i < array.size(); i++)
                this -> arr[i] = array[i];
            this -> length = array.size();

            return (*this);
        };
        T& operator[](int index)
        {
            if (index > this -> length - 1 || index < 0)
                throw std::logic_error("INDEX OUT OF RANGE!");
            return this -> arr[index];
        };
        int size() const
        {
            return (this -> length);
        };
};

#endif
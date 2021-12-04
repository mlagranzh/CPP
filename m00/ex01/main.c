/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:07:05 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 21:07:06 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook PhoneBook;
    int index;
    int i;

    i = -1;
    while (1)
    {
        std::cout << "Введите команду: ";
        std::cin >> command;
        if (command == "ADD")
        {
            i++;
            PhoneBook.add(i%8);
            PhoneBook.contact[i%8].index = i%8;
            std::cout << "SUCCSESS!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            std::cout << std::setw(10) << "index" << "|";
            std::cout << std::setw(10) << "first name" << "|";
            std::cout << std::setw(10) << "last name"<< "|";
            std::cout << std::setw(10) << "nickname" << "|" << std::endl;
            for (int j = 0; j < 4 && !PhoneBook.contact[j].first_name.empty(); j++)
                PhoneBook.summary_print(j);
            std::cout << "Enter a INDEX: ";
            while (!(std::cin >> index))
            {
                // Clear errors (like the failbit flag)
                std::cin.clear();
                // Throw away the rest of the line
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter a NUMBER: ";
            }
            if (index > i)
                std::cout << "INVALID INDEX!" << std::endl;
            else
                PhoneBook.search(index);
        }
        else if (command == "EXIT")
            exit(0);
        else
            std::cout << "!!! ONLY 'ADD' or 'SEARCH' or 'EXIT' !!!" << std::endl;
    }
    return 0;
}


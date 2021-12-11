/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:15:55 by celys             #+#    #+#             */
/*   Updated: 2021/12/10 06:07:41 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Arguments: <filename> <s1> <s2>" << std::endl;
        exit(1);
    }

    std::string filename = std::string(argv[1]);
    std::string s1 = std::string(argv[2]);
    std::string s2 = std::string(argv[3]);
    if (s1.empty() || s2.empty() || filename.empty())
    {
        std::cout << "EMPTY <FILENAME> or <S1> or <S2>" << std::endl;
        exit(1);
    }
        
    std::string line;
    std::ofstream out;

    std::ifstream in(filename);
    if (!in.is_open())
    {
        std::cout << "oh, FILE could not be opened for reading!" << std::endl;
        exit(1);
    }

    out.open(filename.append(".replace"));
    if (!out.is_open())
    {
        std::cout << "oh, FILE could not be opened for writing!" << std::endl;
        exit(1);
    }
    
    while (getline(in, line))
    {
        std::size_t found = line.find(s1);
        if (found != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
        }
        while (found != std::string::npos)
        {
            found = line.find(s1, found);
            if (found != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
        }
        }
        out << line << std::endl;
    }
    in.close();
    out.close();
    return (0);
}


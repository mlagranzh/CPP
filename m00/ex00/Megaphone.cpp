/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celys <celys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:22:54 by celys             #+#    #+#             */
/*   Updated: 2021/12/04 19:22:55 by celys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
 
int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (i = 1; i < argc; i++)
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char)toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return 0;
}
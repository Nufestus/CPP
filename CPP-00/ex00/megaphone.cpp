/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:14:55 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/03 20:07:28 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    std::string input;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int j = 1;
        while(av[j])
        {
            int i = -1;
            while (av[j][++i])
                av[j][i] = std::toupper(av[j][i]);
            input += av[j];
            j++;
        }
        std::cout << input << std::endl;
    }
}
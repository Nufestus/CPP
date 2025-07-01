/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 10:02:19 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/29 10:14:04 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl test;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string input;

    if (ac != 2)
    {
        std::cout << "Wrong Arguments" << std::endl;
        return 1;
    }
    input = av[1];
    if (input != "DEBUG" && input != "INFO"
        && input != "WARNING" && input != "ERROR")
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
    }
    for (int i = 0; i < 4; i++)
        if (input == levels[i])
            test.complain_alot(i);
}
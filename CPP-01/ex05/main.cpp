/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 21:33:45 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/29 09:48:22 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string input;
    Harl lol;

    while (true)
    {
        std::cout << "Input : ";
        if (!std::getline(std::cin, input))
            break ;
        if (input != "debug" && input != "info"
            && input != "error" && input != "warning")
            std::cout << "Wrong Input!\n";
        else
        {
            lol.complain(input);
        }
    }
}
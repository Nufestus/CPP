/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:23:22 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/28 09:49:29 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string line;

    while(true)
    {
        std::cout << "Enter Command : ";
        if (!std::getline(std::cin, line))
            break ;
        if (line == "ADD")
            phonebook.Add_Contact();
        else if (line == "SEARCH")
            phonebook.Search_Contact();
        else if (line == "EXIT")
            break ;
        else
            std::cout << "Wrong Command, Try \"ADD\", \"SEARCH\" or \"EXIT\"" << std::endl;
    }
}
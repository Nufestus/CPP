/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:15:35 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/05 13:09:37 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0)
{
}

bool is_Valid_String(std::string str)
{
	size_t i = 0;
	int check = 1;
	while (i < str.length())
	{
		if (!std::isprint(str[i]))
			return (std::cout << "Invalid Input!" << std::endl, false);
		if (!std::isspace(str[i]))
			check = 0;
		i++;
	}
	if (check == 1)
		return (std::cout << "Invalid Input!" << std::endl, false);
	return (true);
}

bool is_Valid_Integer(std::string str)
{
    if (str.empty())
        return false;
    size_t i = 0;
    if (str[i] == '+' || str[i] == '-')
	{
        if (str.size() == 1)
            return false;
        i++;
    }
    while (i < str.size())
	{
        if (!std::isdigit(str[i]))
            return false;
		i++;
    }
    return true;
}

void    PhoneBook::Add_Contact()
{
	std::string Firstname;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

	std::cout << "Firstname : ";
	if (!std::getline(std::cin, Firstname))
		std::exit(1);
	else if (!is_Valid_String(Firstname))
		return ;
	std::cout << "Lastname : ";
	if (!std::getline(std::cin, LastName))
		std::exit(1);
	else if (!is_Valid_String(LastName))
		return ;
	std::cout << "Nickname : ";
	if (!std::getline(std::cin, Nickname))
		std::exit(1);
	else if (!is_Valid_String(Nickname))
		return ;
	std::cout << "PhoneNumber : ";
	if (!std::getline(std::cin, PhoneNumber))
		std::exit(1);
	else if (!is_Valid_String(PhoneNumber))
		return ;
	std::cout << "Their darkest secret : ";
	if (!std::getline(std::cin, DarkestSecret))
		std::exit(1);
	else if (!is_Valid_String(DarkestSecret))
		return ;
	this->Contacts[count].set_contact(Firstname, LastName, Nickname,
		PhoneNumber, DarkestSecret);
	this->count++;
	if (this->count >= 8)
		this->count = 0;
}

void PhoneBook::Search_Contact()
{
	std::string input;

	for(int i = 0; this->Contacts[i].filled && i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->Contacts[i].display_info();
	}
	std::cout << "Index : ";
	if (!std::getline(std::cin, input))
		return ;
	if (input.length() != 1 || input[0] < '0' || input[0] >= '0' + count)
	{
        std::cout << "Invalid index." << std::endl;
        return;
    }
	int idx = input[0] - '0';
	if (idx > 8)
	{
		std::cout << "Index is out of range !" << std::endl;
		return ;
	}
	else
		this->Contacts[idx].display_full_info();
}


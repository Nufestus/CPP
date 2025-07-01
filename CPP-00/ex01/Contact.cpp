/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:25:00 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/29 13:41:16 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    filled = 0;
}

std::string format_string(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

void    Contact::set_contact(std::string FirstName, std::string LastName,
            std::string Nickname, std::string PhoneNumber, std::string DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->Nickname = Nickname;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
    filled = 1;
}

void Contact::display_info()
{
    std::cout << std::setw(10)
                << format_string(this->FirstName)
                << "|" << std::setw(10) << format_string(this->LastName)
                << "|" << std::setw(10) << format_string(this->Nickname)
                << "|" << std::endl;
}

void Contact::display_full_info()
{
    std::cout << "First Name : " << this->FirstName << std::endl;
    std::cout << "Last Name : " << this->LastName << std::endl;
    std::cout << "Nickname : " << this->Nickname << std::endl;
    std::cout << "Phone Number : " << this->PhoneNumber << std::endl;
    std::cout << "Their secret : " << this->DarkestSecret << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:24:58 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/05 13:14:31 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        int filled;
        Contact();
        void    set_contact(std::string FirstName, std::string LastName,
            std::string Nickname, std::string PhoneNumber, std::string DarkestSecret);
        void    display_info();
        void    display_full_info();
};

#endif
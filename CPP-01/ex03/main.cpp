/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:24:30 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/28 18:29:38 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(club);
    bob.attack();
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    bob.attack();
    }
    std::cout << std::endl;
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    HumanA lol("lol", club);
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    lol.attack();
    jim.attack();
    }
    return 0;
}
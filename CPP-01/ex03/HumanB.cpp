/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:21:40 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/28 18:23:59 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& Weapon)
{
    this->Weapons = &Weapon;
}

HumanB::HumanB(std::string name) : Weapons(NULL), name(name)
{
}

void HumanB::attack()
{
    std::cout << this->name << "  attacks with their " << Weapons->getType() << std::endl;
}
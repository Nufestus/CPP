/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:20:13 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/10 13:30:28 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon)
                : Weapons(Weapon), name(name)
{
}

void HumanA::attack()
{
    std::cout << this->name << "  attacks with their " << Weapons.getType() << std::endl;
}
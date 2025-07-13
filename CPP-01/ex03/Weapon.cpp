/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:16:49 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/10 13:33:39 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{

}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
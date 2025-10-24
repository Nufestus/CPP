/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:26:38 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/24 17:48:31 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->HP = FragTrap::HP;
    this->EP = ScavTrap::EP;
    this->AD = FragTrap::AD;
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name + "_clap_name")
{
    this->name = name;
    this->HP = FragTrap::HP;
    this->EP = ScavTrap::EP;
    this->AD = FragTrap::AD;
    std::cout << "DiamondTrap " << this->name << " constructor overload called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.name + "_clap_name")
{
    *this = other;
    std::cout << "Copy " << this->name << " DiamondTrap constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        ClapTrap::name = name + "_clap_name";
        this->AD = other.AD;
        this->EP = other.EP;
        this->HP = other.HP;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "hello ! I am DiamondTrap " << this->name << " and my ClapTrap name is " << ClapTrap::name << " !" << std::endl;
}

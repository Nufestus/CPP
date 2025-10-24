/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:08:23 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/24 17:13:49 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HP(10), EP(10), AD(0)
{
    std::cout << "Default " << this->name << " overload constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "Copy " << this->name << " constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->AD = other.AD;
        this->EP = other.EP;
        this->HP = other.HP;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EP > 0)
    {
        this->EP--;
        std::cout << "ClapTrap " 
                << this->name << " attacks " 
                << target << ", causing " 
                << this->AD << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no energy to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " took " << amount << " damage!" << std::endl;
    this->HP -= amount;
    if (this->HP < 0)
        this->HP = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EP > 0)
    {
        this->EP--;
        this->HP += amount;
        std::cout << "ClapTrap " << this->name << " got repaired and got " << amount << " HP back!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no energy to repair!" << std::endl;
}
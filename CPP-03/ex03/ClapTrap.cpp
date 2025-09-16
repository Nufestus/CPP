/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:08:23 by aammisse          #+#    #+#             */
/*   Updated: 2025/08/02 19:34:53 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HP(10), EP(10), AD(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : name(Name), HP(10), EP(10), AD(0)
{
    std::cout << "Default constructor overload called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
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
    std::cout << "Destructor called" << std::endl;
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
    this->HP -= amount;
    if (this->HP < 0)
        this->HP = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EP > 0)
    {
        this->HP += amount;
        this->EP--;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no energy to repair!" << std::endl;
}
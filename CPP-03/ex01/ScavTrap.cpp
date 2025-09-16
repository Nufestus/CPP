/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 10:46:31 by aammisse          #+#    #+#             */
/*   Updated: 2025/08/02 19:36:06 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
    std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->HP = 100;
    this->EP = 50;
    this->AD = 20;
    std::cout << "ScavTrap constructor overload called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EP > 0)
    {
        this->EP--;
        std::cout << "ScavTrap " 
                << this->name << " attacks " 
                << target << ", causing " 
                << this->AD << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " has no energy to attack!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3025/08/02 17:14:59 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/24 17:44:22 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->HP = 100;
    this->EP = 100;
    this->AD = 30;
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->HP = 100;
    this->EP = 100;
    this->AD = 30;
    std::cout << "FragTrap " << this->name << " constructor overload called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy " << this->name << " FragTrap constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->EP > 0)
    {
        this->EP--;
        std::cout << "FragTrap "
                << this->name << " attacks " 
                << target << ", causing " 
                << this->AD << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << this->name << " has no energy to attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " High Fives Everyone!" << std::endl;
}
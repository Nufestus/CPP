/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:28:16 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/10 11:20:23 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* Zomb;
    try 
    {
        Zomb = new Zombie(name);
    }
    catch (...)
    {
        std::cout << "Allocation Failed!" << std::endl;
    }
    return (Zomb);
}
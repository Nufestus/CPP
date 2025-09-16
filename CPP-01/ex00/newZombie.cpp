/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:28:16 by aammisse          #+#    #+#             */
/*   Updated: 2025/08/02 14:33:42 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* Zomb;
    try {
        Zomb = new Zombie(name);
    }
    catch (...) {
        std::cout << "Allocation Failed!" << std::endl;
        return (NULL);
    }
    return (Zomb);
}
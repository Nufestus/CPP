/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:51:00 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/05 14:04:21 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;

    if (N < 0)
        return NULL;
    try {
        horde = new Zombie[N];
    } catch (...) {
        std::cout << "Allocation failed!" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
        horde[i].set_name(name);
    return horde;
}
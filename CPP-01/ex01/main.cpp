/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:38:37 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/10 14:51:09 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde;

    int num = 10;
    horde = zombieHorde(num, "ahmed");
    if (horde == NULL)
        return (0);
    for (int i = 0; i < num; i++)
        horde[i].announce();
    delete[] horde;
}
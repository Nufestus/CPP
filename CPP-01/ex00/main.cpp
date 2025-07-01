/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:38:37 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/28 15:48:19 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *object;
    Zombie *object2;

    object = newZombie("ahmed");
    object2 = newZombie("bomboclat");
    object->announce();
    object2->announce();
    randomChump("bomboclat112");
    delete object;
    delete object2;
}
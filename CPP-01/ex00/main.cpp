/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:38:37 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/09 20:43:06 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *object;
    Zombie *object2;

    object = newZombie("ahmed");
    object2 = newZombie("whatever");
    object->announce();
    object2->announce();
    randomChump("zombie111");
    delete object;
    delete object2;
}
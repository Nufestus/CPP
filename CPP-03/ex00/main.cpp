/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:45:30 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/29 14:48:20 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Ahmed");
    ClapTrap bombo("KOKO");

    bombo.attack("Ahmed");
    ClapTrap lol(robot);
    lol.attack("KOKO");
    robot.attack("KOKO");
    robot.beRepaired(10);
    robot.takeDamage(10);
}
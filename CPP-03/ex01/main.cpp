/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:45:30 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/24 12:45:50 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap robot("Ahmed");
    ScavTrap bombo("lool");

    bombo.attack("Ahmed");
    ScavTrap lol("ahah");
    lol.attack("KOKO");
    bombo.guardGate();
    lol.guardGate();
    robot.attack("KOKO");
    robot.beRepaired(10);
    robot.takeDamage(10);
}
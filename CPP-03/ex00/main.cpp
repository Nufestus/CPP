/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:45:30 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/24 12:17:46 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Ahmed");
    ClapTrap bombo("KOKO");

    bombo.attack("Ahmed");
    robot.takeDamage(0);
    robot.beRepaired(10);
}
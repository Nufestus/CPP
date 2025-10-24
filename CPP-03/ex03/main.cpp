/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:45:30 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/24 17:45:30 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== Default constructor ===" << std::endl;
    DiamondTrap dt1;
    dt1.whoAmI();
    dt1.attack("target1");

    std::cout << "\n=== Parameterized constructor ===" << std::endl;
    DiamondTrap dt2("Ahmed");
    dt2.whoAmI();
    dt2.attack("target2");

    std::cout << "\n=== Copy constructor ===" << std::endl;
    DiamondTrap dt3(dt2);
    dt3.whoAmI();
    dt3.attack("target3");

    std::cout << "\n=== Assignment operator ===" << std::endl;
    dt1 = dt3;
    dt1.whoAmI();
    dt1.attack("target4");

    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}
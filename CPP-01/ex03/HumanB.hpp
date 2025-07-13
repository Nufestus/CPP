/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:21:56 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/10 14:15:08 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private:
        Weapon *Weapons;
        std::string name;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& Weapon);
        void attack();
};

#endif
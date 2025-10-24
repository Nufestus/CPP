/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 09:23:47 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/04 12:19:42 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(a);

    Point inside(5.0f, 5.0f);
    Point outside(15.0f, 5.0f);
    Point edge(5.0f, 0.0f);

    std::cout << "Point inside: " << (bsp(a, b, c, inside) ? "INSIDE" : "OUTSIDE") << std::endl;
    std::cout << "Point outside: " << (bsp(a, b, c, outside) ? "INSIDE" : "OUTSIDE") << std::endl;
    std::cout << "Point on edge: " << (bsp(a, b, c, edge) ? "INSIDE" : "OUTSIDE") << std::endl;

    return 0;
}
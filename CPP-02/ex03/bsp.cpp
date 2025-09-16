/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:23:49 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/11 17:25:22 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign(Point p1, Point p2, Point p3)
{
    return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) -
           (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d1 = sign(point, a, b);  
    float d2 = sign(point, b, c);
    float d3 = sign(point, c, a);

    bool neg = false;
    bool pos = false;

    if (d1 <= 0 || d2 <= 0 || d3 <= 0)
        neg = true;
    if (d1 >= 0 || d2 >= 0 || d3 >= 0)
        pos = true;
    return !(neg && pos);
}
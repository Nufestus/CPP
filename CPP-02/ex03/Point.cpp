/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:25:48 by aammisse          #+#    #+#             */
/*   Updated: 2025/10/21 21:23:50 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
    std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (void)other;
    return (*this);
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

const Fixed& Point::getX()
{
    return (this->x);
}

const Fixed& Point::getY()
{
    return (this->y);
}
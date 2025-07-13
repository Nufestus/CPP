/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:25:48 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/11 17:37:18 by aammisse         ###   ########.fr       */
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


Point::Point(const Point& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}


Point& Point::operator=(const Point& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->x = other.x;
    return (*this);
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}
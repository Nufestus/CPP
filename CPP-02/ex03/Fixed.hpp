/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:50:15 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/11 17:18:48 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fract_point;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float num);
        Fixed(const Fixed& other);
        ~Fixed();

        Fixed& operator=(const Fixed& other);

        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);

        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        int toInt() const;
        float toFloat() const;
        static Fixed& min(Fixed& num1, Fixed& num2);
        static const Fixed& min(const Fixed& num1, const Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        static const Fixed& max(const Fixed& num1, const Fixed& num2);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
    
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
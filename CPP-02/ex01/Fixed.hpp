/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:50:15 by aammisse          #+#    #+#             */
/*   Updated: 2025/07/11 17:18:33 by aammisse         ###   ########.fr       */
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
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        
        int toInt() const;
        float toFloat() const;

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
    
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
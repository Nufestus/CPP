/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 21:11:36 by aammisse          #+#    #+#             */
/*   Updated: 2025/06/29 09:43:55 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
};

typedef void (Harl::* func_ptr)(void);
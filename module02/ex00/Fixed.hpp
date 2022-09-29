/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 11:45:00 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/06/01 11:12:37 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _value;
        static const int _fractBits = 8;
    
    public:
        Fixed();
        Fixed( const Fixed& copy );
        Fixed& operator=( const Fixed& other );

        int getRawBits( void ) const;
        void setRawBits( int const raw );

         ~Fixed();
};

#endif